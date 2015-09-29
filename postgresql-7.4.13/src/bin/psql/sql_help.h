/*
 * *** Do not change this file by hand. It is automatically
 * *** generated from the DocBook documentation.
 *
 * generated by
 *     /usr/local/bin/suidperl create_help.pl ../../../doc/src/sgml/ref sql_help.h
 *
 */

#ifndef SQL_HELP_H
#define SQL_HELP_H

#define N_(x) (x) /* gettext noop */

struct _helpStruct
{
    char	   *cmd;	   /* the command name */
    char	   *help;	   /* the help associated with it */
    char	   *syntax;	   /* the syntax associated with it */
};


static struct _helpStruct QL_HELP[] = {
    { "ABORT",
      N_("abort the current transaction"),
      N_("ABORT [ WORK | TRANSACTION ]") },

    { "ALTER AGGREGATE",
      N_("change the definition of an aggregate function"),
      N_("ALTER AGGREGATE name ( type ) RENAME TO newname") },

    { "ALTER CONVERSION",
      N_("change the definition of a conversion"),
      N_("ALTER CONVERSION name RENAME TO newname") },

    { "ALTER DATABASE",
      N_("change a database"),
      N_("ALTER DATABASE name SET parameter { TO | = } { value | DEFAULT }\nALTER DATABASE name RESET parameter\n\nALTER DATABASE name RENAME TO newname") },

    { "ALTER DOMAIN",
      N_("change the definition of a domain"),
      N_("ALTER DOMAIN name\n    { SET DEFAULT expression | DROP DEFAULT }\nALTER DOMAIN name\n    { SET | DROP } NOT NULL\nALTER DOMAIN name\n    ADD domain_constraint\nALTER DOMAIN name\n    DROP CONSTRAINT constraint_name [ RESTRICT | CASCADE ]\nALTER DOMAIN name\n    OWNER TO new_owner") },

    { "ALTER FUNCTION",
      N_("change the definition of a function"),
      N_("ALTER FUNCTION name ( [ type [, ...] ] ) RENAME TO newname") },

    { "ALTER GROUP",
      N_("change a user group"),
      N_("ALTER GROUP groupname ADD USER username [, ... ]\nALTER GROUP groupname DROP USER username [, ... ]\n\nALTER GROUP groupname RENAME TO newname") },

    { "ALTER LANGUAGE",
      N_("change the definition of a procedural language"),
      N_("ALTER LANGUAGE name RENAME TO newname") },

    { "ALTER OPERATOR CLASS",
      N_("change the definition of an operator class"),
      N_("ALTER OPERATOR CLASS name USING index_method RENAME TO newname") },

    { "ALTER SCHEMA",
      N_("change the definition of a schema"),
      N_("ALTER SCHEMA name RENAME TO newname") },

    { "ALTER SEQUENCE",
      N_("alter the definition of a sequence generator"),
      N_("ALTER SEQUENCE name [ INCREMENT [ BY ] increment ]\n    [ MINVALUE minvalue | NO MINVALUE ] [ MAXVALUE maxvalue | NO MAXVALUE ]\n    [ RESTART [ WITH ] start ] [ CACHE cache ] [ [ NO ] CYCLE ]") },

    { "ALTER TABLE",
      N_("change the definition of a table"),
      N_("ALTER TABLE [ ONLY ] name [ * ]\n    ADD [ COLUMN ] column type [ column_constraint [ ... ] ]\nALTER TABLE [ ONLY ] name [ * ]\n    DROP [ COLUMN ] column [ RESTRICT | CASCADE ]\nALTER TABLE [ ONLY ] name [ * ]\n    ALTER [ COLUMN ] column { SET DEFAULT expression | DROP DEFAULT }\nALTER TABLE [ ONLY ] name [ * ]\n    ALTER [ COLUMN ] column { SET | DROP } NOT NULL\nALTER TABLE [ ONLY ] name [ * ]\n    ALTER [ COLUMN ] column SET STATISTICS integer\nALTER TABLE [ ONLY ] name [ * ]\n    ALTER [ COLUMN ] column SET STORAGE { PLAIN | EXTERNAL | EXTENDED | MAIN }\nALTER TABLE [ ONLY ] name [ * ]\n    SET WITHOUT OIDS\nALTER TABLE [ ONLY ] name [ * ]\n    RENAME [ COLUMN ] column TO new_column\nALTER TABLE name\n    RENAME TO new_name\nALTER TABLE [ ONLY ] name [ * ]\n    ADD table_constraint\nALTER TABLE [ ONLY ] name [ * ]\n    DROP CONSTRAINT constraint_name [ RESTRICT | CASCADE ]\nALTER TABLE name\n    OWNER TO new_owner\nALTER TABLE name\n    CLUSTER ON index_name") },

    { "ALTER TRIGGER",
      N_("change the definition of a trigger"),
      N_("ALTER TRIGGER name ON table RENAME TO newname") },

    { "ALTER USER",
      N_("change a database user account"),
      N_("ALTER USER name [ [ WITH ] option [ ... ] ]\n\nwhere option can be:\n\n    [ ENCRYPTED | UNENCRYPTED ] PASSWORD 'password' \n    | CREATEDB | NOCREATEDB\n    | CREATEUSER | NOCREATEUSER \n    | VALID UNTIL 'abstime'\n\nALTER USER name RENAME TO newname\n\nALTER USER name SET parameter { TO | = } { value | DEFAULT }\nALTER USER name RESET parameter") },

    { "ANALYZE",
      N_("collect statistics about a database"),
      N_("ANALYZE [ VERBOSE ] [ table [ (column [, ...] ) ] ]") },

    { "BEGIN",
      N_("start a transaction block"),
      N_("BEGIN [ WORK | TRANSACTION ]") },

    { "CHECKPOINT",
      N_("force a transaction log checkpoint"),
      N_("CHECKPOINT") },

    { "CLOSE",
      N_("close a cursor"),
      N_("CLOSE name") },

    { "CLUSTER",
      N_("cluster a table according to an index"),
      N_("CLUSTER indexname ON tablename\nCLUSTER tablename\nCLUSTER") },

    { "COMMENT",
      N_("define or change the comment of an object"),
      N_("COMMENT ON\n{\n  TABLE object_name |\n  COLUMN table_name.column_name |\n  AGGREGATE agg_name (agg_type) |\n  CONSTRAINT constraint_name ON table_name |\n  DATABASE object_name |\n  DOMAIN object_name |\n  FUNCTION func_name (arg1_type, arg2_type, ...) |\n  INDEX object_name |\n  OPERATOR op (leftoperand_type, rightoperand_type) |\n  RULE rule_name ON table_name |\n  SCHEMA object_name |\n  SEQUENCE object_name |\n  TRIGGER trigger_name ON table_name |\n  TYPE object_name |\n  VIEW object_name\n} IS 'text'") },

    { "COMMIT",
      N_("commit the current transaction"),
      N_("COMMIT [ WORK | TRANSACTION ]") },

    { "COPY",
      N_("copy data between a file and a table"),
      N_("COPY tablename [ ( column [, ...] ) ]\n    FROM { 'filename' | STDIN }\n    [ [ WITH ] \n          [ BINARY ] \n          [ OIDS ]\n          [ DELIMITER [ AS ] 'delimiter' ]\n          [ NULL [ AS ] 'null string' ] ]\n\nCOPY tablename [ ( column [, ...] ) ]\n    TO { 'filename' | STDOUT }\n    [ [ WITH ] \n          [ BINARY ]\n          [ OIDS ]\n          [ DELIMITER [ AS ] 'delimiter' ]\n          [ NULL [ AS ] 'null string' ] ]") },

    { "CREATE AGGREGATE",
      N_("define a new aggregate function"),
      N_("CREATE AGGREGATE name (\n    BASETYPE = input_data_type,\n    SFUNC = sfunc,\n    STYPE = state_data_type\n    [ , FINALFUNC = ffunc ]\n    [ , INITCOND = initial_condition ]\n)") },

    { "CREATE CAST",
      N_("define a new cast"),
      N_("CREATE CAST (sourcetype AS targettype)\n    WITH FUNCTION funcname (argtype)\n    [ AS ASSIGNMENT | AS IMPLICIT ]\n\nCREATE CAST (sourcetype AS targettype)\n    WITHOUT FUNCTION\n    [ AS ASSIGNMENT | AS IMPLICIT ]") },

    { "CREATE CONSTRAINT TRIGGER",
      N_("define a new constraint trigger"),
      N_("CREATE CONSTRAINT TRIGGER name\n    AFTER events ON\n    tablename constraint attributes\n    FOR EACH ROW EXECUTE PROCEDURE funcname ( args )") },

    { "CREATE CONVERSION",
      N_("define a new encoding conversion"),
      N_("CREATE [DEFAULT] CONVERSION name\n    FOR source_encoding TO dest_encoding FROM funcname") },

    { "CREATE DATABASE",
      N_("create a new database"),
      N_("CREATE DATABASE name\n    [ [ WITH ] [ OWNER [=] dbowner ]\n           [ LOCATION [=] 'dbpath' ]\n           [ TEMPLATE [=] template ]\n           [ ENCODING [=] encoding ] ]") },

    { "CREATE DOMAIN",
      N_("define a new domain"),
      N_("CREATE DOMAIN name [AS] data_type\n    [ DEFAULT expression ]\n    [ constraint [ ... ] ]\n\nwhere constraint is:\n\n[ CONSTRAINT constraint_name ]\n{ NOT NULL | NULL | CHECK (expression) }") },

    { "CREATE FUNCTION",
      N_("define a new function"),
      N_("CREATE [ OR REPLACE ] FUNCTION name ( [ argtype [, ...] ] )\n    RETURNS rettype\n  { LANGUAGE langname\n    | IMMUTABLE | STABLE | VOLATILE\n    | CALLED ON NULL INPUT | RETURNS NULL ON NULL INPUT | STRICT\n    | [EXTERNAL] SECURITY INVOKER | [EXTERNAL] SECURITY DEFINER\n    | AS 'definition'\n    | AS 'obj_file', 'link_symbol'\n  } ...\n    [ WITH ( attribute [, ...] ) ]") },

    { "CREATE GROUP",
      N_("define a new user group"),
      N_("CREATE GROUP name [ [ WITH ] option [ ... ] ]\n\nwhere option can be:\n\n     SYSID gid\n   | USER  username [, ...]") },

    { "CREATE INDEX",
      N_("define a new index"),
      N_("CREATE [ UNIQUE ] INDEX name ON table [ USING method ]\n    ( { column | ( expression ) } [ opclass ] [, ...] )\n    [ WHERE predicate ]") },

    { "CREATE LANGUAGE",
      N_("define a new procedural language"),
      N_("CREATE [ TRUSTED ] [ PROCEDURAL ] LANGUAGE name\n    HANDLER call_handler [ VALIDATOR valfunction ]") },

    { "CREATE OPERATOR CLASS",
      N_("define a new operator class"),
      N_("CREATE OPERATOR CLASS name [ DEFAULT ] FOR TYPE data_type USING index_method AS\n  {  OPERATOR strategy_number operator_name [ ( op_type, op_type ) ] [ RECHECK ]\n   | FUNCTION support_number funcname ( argument_type [, ...] )\n   | STORAGE storage_type\n  } [, ... ]") },

    { "CREATE OPERATOR",
      N_("define a new operator"),
      N_("CREATE OPERATOR name (\n    PROCEDURE = funcname\n    [, LEFTARG = lefttype ] [, RIGHTARG = righttype ]\n    [, COMMUTATOR = com_op ] [, NEGATOR = neg_op ]\n    [, RESTRICT = res_proc ] [, JOIN = join_proc ]\n    [, HASHES ] [, MERGES ]\n    [, SORT1 = left_sort_op ] [, SORT2 = right_sort_op ]\n    [, LTCMP = less_than_op ] [, GTCMP = greater_than_op ]\n)") },

    { "CREATE RULE",
      N_("define a new rewrite rule"),
      N_("CREATE [ OR REPLACE ] RULE name AS ON event\n    TO table [ WHERE condition ]\n    DO [ INSTEAD ] { NOTHING | command | ( command ; command ... ) }") },

    { "CREATE SCHEMA",
      N_("define a new schema"),
      N_("CREATE SCHEMA schemaname [ AUTHORIZATION username ] [ schema_element [ ... ] ]\nCREATE SCHEMA AUTHORIZATION username [ schema_element [ ... ] ]") },

    { "CREATE SEQUENCE",
      N_("define a new sequence generator"),
      N_("CREATE [ TEMPORARY | TEMP ] SEQUENCE name [ INCREMENT [ BY ] increment ]\n    [ MINVALUE minvalue | NO MINVALUE ] [ MAXVALUE maxvalue | NO MAXVALUE ]\n    [ START [ WITH ] start ] [ CACHE cache ] [ [ NO ] CYCLE ]") },

    { "CREATE TABLE",
      N_("define a new table"),
      N_("CREATE [ [ GLOBAL | LOCAL ] { TEMPORARY | TEMP } ] TABLE table_name (\n  { column_name data_type [ DEFAULT default_expr ] [ column_constraint [ ... ] ]\n    | table_constraint\n    | LIKE parent_table [ { INCLUDING | EXCLUDING } DEFAULTS ] }  [, ... ]\n)\n[ INHERITS ( parent_table [, ... ] ) ]\n[ WITH OIDS | WITHOUT OIDS ]\n[ ON COMMIT { PRESERVE ROWS | DELETE ROWS | DROP } ]\n\nwhere column_constraint is:\n\n[ CONSTRAINT constraint_name ]\n{ NOT NULL | NULL | UNIQUE | PRIMARY KEY |\n  CHECK (expression) |\n  REFERENCES reftable [ ( refcolumn ) ] [ MATCH FULL | MATCH PARTIAL | MATCH SIMPLE ]\n    [ ON DELETE action ] [ ON UPDATE action ] }\n[ DEFERRABLE | NOT DEFERRABLE ] [ INITIALLY DEFERRED | INITIALLY IMMEDIATE ]\n\nand table_constraint is:\n\n[ CONSTRAINT constraint_name ]\n{ UNIQUE ( column_name [, ... ] ) |\n  PRIMARY KEY ( column_name [, ... ] ) |\n  CHECK ( expression ) |\n  FOREIGN KEY ( column_name [, ... ] ) REFERENCES reftable [ ( refcolumn [, ... ] ) ]\n    [ MATCH FULL | MATCH PARTIAL | MATCH SIMPLE ] [ ON DELETE action ] [ ON UPDATE action ] }\n[ DEFERRABLE | NOT DEFERRABLE ] [ INITIALLY DEFERRED | INITIALLY IMMEDIATE ]") },

    { "CREATE TABLE AS",
      N_("create a new table from the results of a query"),
      N_("CREATE [ [ GLOBAL | LOCAL ] { TEMPORARY | TEMP } ] TABLE table_name [ (column_name [, ...] ) ]\n    AS query") },

    { "CREATE TRIGGER",
      N_("define a new trigger"),
      N_("CREATE TRIGGER name { BEFORE | AFTER } { event [ OR ... ] }\n    ON table [ FOR [ EACH ] { ROW | STATEMENT } ]\n    EXECUTE PROCEDURE funcname ( arguments )") },

    { "CREATE TYPE",
      N_("define a new data type"),
      N_("CREATE TYPE name AS\n    ( attribute_name data_type [, ... ] )\n\nCREATE TYPE name (\n    INPUT = input_function,\n    OUTPUT = output_function\n    [ , RECEIVE = receive_function ]\n    [ , SEND = send_function ]\n    [ , INTERNALLENGTH = { internallength | VARIABLE } ]\n    [ , PASSEDBYVALUE ]\n    [ , ALIGNMENT = alignment ]\n    [ , STORAGE = storage ]\n    [ , DEFAULT = default ]\n    [ , ELEMENT = element ]\n    [ , DELIMITER = delimiter ]\n)") },

    { "CREATE USER",
      N_("define a new database user account"),
      N_("CREATE USER name [ [ WITH ] option [ ... ] ]\n\nwhere option can be:\n    \n      SYSID uid \n    | [ ENCRYPTED | UNENCRYPTED ] PASSWORD 'password'\n    | CREATEDB | NOCREATEDB\n    | CREATEUSER | NOCREATEUSER\n    | IN GROUP groupname [, ...]\n    | VALID UNTIL 'abstime'") },

    { "CREATE VIEW",
      N_("define a new view"),
      N_("CREATE [ OR REPLACE ] VIEW name [ ( column_name [, ...] ) ] AS query") },

    { "DEALLOCATE",
      N_("deallocate a prepared statement"),
      N_("DEALLOCATE [ PREPARE ] plan_name") },

    { "DECLARE",
      N_("define a cursor"),
      N_("DECLARE name [ BINARY ] [ INSENSITIVE ] [ [ NO ] SCROLL ]\n    CURSOR [ { WITH | WITHOUT } HOLD ] FOR query\n    [ FOR { READ ONLY | UPDATE [ OF column [, ...] ] } ]") },

    { "DELETE",
      N_("delete rows of a table"),
      N_("DELETE FROM [ ONLY ] table [ WHERE condition ]") },

    { "DROP AGGREGATE",
      N_("remove an aggregate function"),
      N_("DROP AGGREGATE name ( type ) [ CASCADE | RESTRICT ]") },

    { "DROP CAST",
      N_("remove a cast"),
      N_("DROP CAST (sourcetype AS targettype) [ CASCADE | RESTRICT ]") },

    { "DROP CONVERSION",
      N_("remove a conversion"),
      N_("DROP CONVERSION name [ CASCADE | RESTRICT ]") },

    { "DROP DATABASE",
      N_("remove a database"),
      N_("DROP DATABASE name") },

    { "DROP DOMAIN",
      N_("remove a domain"),
      N_("DROP DOMAIN name [, ...]  [ CASCADE | RESTRICT ]") },

    { "DROP FUNCTION",
      N_("remove a function"),
      N_("DROP FUNCTION name ( [ type [, ...] ] ) [ CASCADE | RESTRICT ]") },

    { "DROP GROUP",
      N_("remove a user group"),
      N_("DROP GROUP name") },

    { "DROP INDEX",
      N_("remove an index"),
      N_("DROP INDEX name [, ...] [ CASCADE | RESTRICT ]") },

    { "DROP LANGUAGE",
      N_("remove a procedural language"),
      N_("DROP [ PROCEDURAL ] LANGUAGE name [ CASCADE | RESTRICT ]") },

    { "DROP OPERATOR CLASS",
      N_("remove an operator class"),
      N_("DROP OPERATOR CLASS name USING index_method [ CASCADE | RESTRICT ]") },

    { "DROP OPERATOR",
      N_("remove an operator"),
      N_("DROP OPERATOR name ( lefttype | NONE , righttype | NONE ) [ CASCADE | RESTRICT ]") },

    { "DROP RULE",
      N_("remove a rewrite rule"),
      N_("DROP RULE name ON relation [ CASCADE | RESTRICT ]") },

    { "DROP SCHEMA",
      N_("remove a schema"),
      N_("DROP SCHEMA name [, ...] [ CASCADE | RESTRICT ]") },

    { "DROP SEQUENCE",
      N_("remove a sequence"),
      N_("DROP SEQUENCE name [, ...] [ CASCADE | RESTRICT ]") },

    { "DROP TABLE",
      N_("remove a table"),
      N_("DROP TABLE name [, ...] [ CASCADE | RESTRICT ]") },

    { "DROP TRIGGER",
      N_("remove a trigger"),
      N_("DROP TRIGGER name ON table [ CASCADE | RESTRICT ]") },

    { "DROP TYPE",
      N_("remove a data type"),
      N_("DROP TYPE name [, ...] [ CASCADE | RESTRICT ]") },

    { "DROP USER",
      N_("remove a database user account"),
      N_("DROP USER name") },

    { "DROP VIEW",
      N_("remove a view"),
      N_("DROP VIEW name [, ...] [ CASCADE | RESTRICT ]") },

    { "END",
      N_("commit the current transaction"),
      N_("END [ WORK | TRANSACTION ]") },

    { "EXECUTE",
      N_("execute a prepared statement"),
      N_("EXECUTE plan_name [ (parameter [, ...] ) ]") },

    { "EXPLAIN",
      N_("show the execution plan of a statement"),
      N_("EXPLAIN [ ANALYZE ] [ VERBOSE ] statement") },

    { "FETCH",
      N_("retrieve rows from a query using a cursor"),
      N_("FETCH [ direction { FROM | IN } ] cursorname\n\nwhere direction can be empty or one of:\n\n    NEXT\n    PRIOR\n    FIRST\n    LAST\n    ABSOLUTE count\n    RELATIVE count\n    count\n    ALL\n    FORWARD\n    FORWARD count\n    FORWARD ALL\n    BACKWARD\n    BACKWARD count\n    BACKWARD ALL") },

    { "GRANT",
      N_("define access privileges"),
      N_("GRANT { { SELECT | INSERT | UPDATE | DELETE | RULE | REFERENCES | TRIGGER }\n    [,...] | ALL [ PRIVILEGES ] }\n    ON [ TABLE ] tablename [, ...]\n    TO { username | GROUP groupname | PUBLIC } [, ...] [ WITH GRANT OPTION ]\n\nGRANT { { CREATE | TEMPORARY | TEMP } [,...] | ALL [ PRIVILEGES ] }\n    ON DATABASE dbname [, ...]\n    TO { username | GROUP groupname | PUBLIC } [, ...] [ WITH GRANT OPTION ]\n\nGRANT { EXECUTE | ALL [ PRIVILEGES ] }\n    ON FUNCTION funcname ([type, ...]) [, ...]\n    TO { username | GROUP groupname | PUBLIC } [, ...] [ WITH GRANT OPTION ]\n\nGRANT { USAGE | ALL [ PRIVILEGES ] }\n    ON LANGUAGE langname [, ...]\n    TO { username | GROUP groupname | PUBLIC } [, ...] [ WITH GRANT OPTION ]\n\nGRANT { { CREATE | USAGE } [,...] | ALL [ PRIVILEGES ] }\n    ON SCHEMA schemaname [, ...]\n    TO { username | GROUP groupname | PUBLIC } [, ...] [ WITH GRANT OPTION ]") },

    { "INSERT",
      N_("create new rows in a table"),
      N_("INSERT INTO table [ ( column [, ...] ) ]\n    { DEFAULT VALUES | VALUES ( { expression | DEFAULT } [, ...] ) | query }") },

    { "LISTEN",
      N_("listen for a notification"),
      N_("LISTEN name") },

    { "LOAD",
      N_("load or reload a shared library file"),
      N_("LOAD 'filename'") },

    { "LOCK",
      N_("lock a table"),
      N_("LOCK [ TABLE ] name [, ...] [ IN lockmode MODE ]\n\nwhere lockmode is one of:\n\n    ACCESS SHARE | ROW SHARE | ROW EXCLUSIVE | SHARE UPDATE EXCLUSIVE\n    | SHARE | SHARE ROW EXCLUSIVE | EXCLUSIVE | ACCESS EXCLUSIVE") },

    { "MOVE",
      N_("position a cursor"),
      N_("MOVE [ direction { FROM | IN } ] cursorname") },

    { "NOTIFY",
      N_("generate a notification"),
      N_("NOTIFY name") },

    { "PREPARE",
      N_("prepare a statement for execution"),
      N_("PREPARE plan_name [ (datatype [, ...] ) ] AS statement") },

    { "REINDEX",
      N_("rebuild indexes"),
      N_("REINDEX { DATABASE | TABLE | INDEX } name [ FORCE ]") },

    { "RESET",
      N_("restore the value of a run-time parameter to the default value"),
      N_("RESET name\nRESET ALL") },

    { "REVOKE",
      N_("remove access privileges"),
      N_("REVOKE [ GRANT OPTION FOR ]\n    { { SELECT | INSERT | UPDATE | DELETE | RULE | REFERENCES | TRIGGER }\n    [,...] | ALL [ PRIVILEGES ] }\n    ON [ TABLE ] tablename [, ...]\n    FROM { username | GROUP groupname | PUBLIC } [, ...]\n    [ CASCADE | RESTRICT ]\n\nREVOKE [ GRANT OPTION FOR ]\n    { { CREATE | TEMPORARY | TEMP } [,...] | ALL [ PRIVILEGES ] }\n    ON DATABASE dbname [, ...]\n    FROM { username | GROUP groupname | PUBLIC } [, ...]\n    [ CASCADE | RESTRICT ]\n\nREVOKE [ GRANT OPTION FOR ]\n    { EXECUTE | ALL [ PRIVILEGES ] }\n    ON FUNCTION funcname ([type, ...]) [, ...]\n    FROM { username | GROUP groupname | PUBLIC } [, ...]\n    [ CASCADE | RESTRICT ]\n\nREVOKE [ GRANT OPTION FOR ]\n    { USAGE | ALL [ PRIVILEGES ] }\n    ON LANGUAGE langname [, ...]\n    FROM { username | GROUP groupname | PUBLIC } [, ...]\n    [ CASCADE | RESTRICT ]\n\nREVOKE [ GRANT OPTION FOR ]\n    { { CREATE | USAGE } [,...] | ALL [ PRIVILEGES ] }\n    ON SCHEMA schemaname [, ...]\n    FROM { username | GROUP groupname | PUBLIC } [, ...]\n    [ CASCADE | RESTRICT ]") },

    { "ROLLBACK",
      N_("abort the current transaction"),
      N_("ROLLBACK [ WORK | TRANSACTION ]") },

    { "SELECT",
      N_("retrieve rows from a table or view"),
      N_("SELECT [ ALL | DISTINCT [ ON ( expression [, ...] ) ] ]\n    * | expression [ AS output_name ] [, ...]\n    [ FROM from_item [, ...] ]\n    [ WHERE condition ]\n    [ GROUP BY expression [, ...] ]\n    [ HAVING condition [, ...] ]\n    [ { UNION | INTERSECT | EXCEPT } [ ALL ] select ]\n    [ ORDER BY expression [ ASC | DESC | USING operator ] [, ...] ]\n    [ LIMIT { count | ALL } ]\n    [ OFFSET start ]\n    [ FOR UPDATE [ OF table_name [, ...] ] ]\n\nwhere from_item can be one of:\n\n    [ ONLY ] table_name [ * ] [ [ AS ] alias [ ( column_alias [, ...] ) ] ]\n    ( select ) [ AS ] alias [ ( column_alias [, ...] ) ]\n    function_name ( [ argument [, ...] ] ) [ AS ] alias [ ( column_alias [, ...] | column_definition [, ...] ) ]\n    function_name ( [ argument [, ...] ] ) AS ( column_definition [, ...] )\n    from_item [ NATURAL ] join_type from_item [ ON join_condition | USING ( join_column [, ...] ) ]") },

    { "SELECT INTO",
      N_("create a new table from the results of a query"),
      N_("SELECT [ ALL | DISTINCT [ ON ( expression [, ...] ) ] ]\n    * | expression [ AS output_name ] [, ...]\n    INTO [ TEMPORARY | TEMP ] [ TABLE ] new_table\n    [ FROM from_item [, ...] ]\n    [ WHERE condition ]\n    [ GROUP BY expression [, ...] ]\n    [ HAVING condition [, ...] ]\n    [ { UNION | INTERSECT | EXCEPT } [ ALL ] select ]\n    [ ORDER BY expression [ ASC | DESC | USING operator ] [, ...] ]\n    [ LIMIT { count | ALL } ]\n    [ OFFSET start ]\n    [ FOR UPDATE [ OF tablename [, ...] ] ]") },

    { "SET",
      N_("change a run-time parameter"),
      N_("SET [ SESSION | LOCAL ] name { TO | = } { value | 'value' | DEFAULT }\nSET [ SESSION | LOCAL ] TIME ZONE { timezone | LOCAL | DEFAULT }") },

    { "SET CONSTRAINTS",
      N_("set the constraint mode of the current transaction"),
      N_("SET CONSTRAINTS { ALL | name [, ...] } { DEFERRED | IMMEDIATE }") },

    { "SET SESSION AUTHORIZATION",
      N_("set the session user identifier and the current user identifier of the current session"),
      N_("SET [ SESSION | LOCAL ] SESSION AUTHORIZATION username\nSET [ SESSION | LOCAL ] SESSION AUTHORIZATION DEFAULT\nRESET SESSION AUTHORIZATION") },

    { "SET TRANSACTION",
      N_("set the characteristics of the current transaction"),
      N_("SET TRANSACTION\n    [ ISOLATION LEVEL { READ COMMITTED | SERIALIZABLE } ] [ READ WRITE | READ ONLY ]\nSET SESSION CHARACTERISTICS AS TRANSACTION\n    [ ISOLATION LEVEL { READ COMMITTED | SERIALIZABLE } ] [ READ WRITE | READ ONLY ]") },

    { "SHOW",
      N_("show the value of a run-time parameter"),
      N_("SHOW name\nSHOW ALL") },

    { "START TRANSACTION",
      N_("start a transaction block"),
      N_("START TRANSACTION [ ISOLATION LEVEL { READ COMMITTED | SERIALIZABLE } ] [ READ WRITE | READ ONLY ]") },

    { "TRUNCATE",
      N_("empty a table"),
      N_("TRUNCATE [ TABLE ] name") },

    { "UNLISTEN",
      N_("stop listening for a notification"),
      N_("UNLISTEN { name | * }") },

    { "UPDATE",
      N_("update rows of a table"),
      N_("UPDATE [ ONLY ] table SET column = { expression | DEFAULT } [, ...]\n    [ FROM fromlist ]\n    [ WHERE condition ]") },

    { "VACUUM",
      N_("garbage-collect and optionally analyze a database"),
      N_("VACUUM [ FULL ] [ FREEZE ] [ VERBOSE ] [ table ]\nVACUUM [ FULL ] [ FREEZE ] [ VERBOSE ] ANALYZE [ table [ (column [, ...] ) ] ]") },


    { NULL, NULL, NULL }    /* End of list marker */
};


#define QL_HELP_COUNT 93


#endif /* SQL_HELP_H */
