// rea decompile_all
// name: SADatabase::createTable
// address: 0x10071e318
// body: available
// range: 0x10071e318-0x10071e547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SADatabase::createTable(ID param_1,SEL param_2)

{
  bool bVar1;
  int iVar2;
  ID self;
  char *sql;
  unsigned_long_long uVar3;
  undefined8 uVar4;
  sqlite3 *psVar5;
  cfstringStruct *pcVar6;
  
  bVar1 = isOpen(param_1);
  if (bVar1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = isCreatedTable(param_1);
    if ((bVar1 & 1) == 0) {
      self = NSString::stringWithFormat_
                       ((ID)&_OBJC_CLASS___NSString,
                        &
                        cf_createtableifnotexists___idINTEGERPRIMARYKEYAUTOINCREMENT_typeTEXT_contentTEXT_
                       );
      psVar5 = *(sqlite3 **)(param_1 + 8);
      _objc_retainAutorelease();
      sql = (char *)objc_stub::UTF8String(self);
      iVar2 = _sqlite3_exec(psVar5,sql,(callback *)0x0,(void *)0x0,(char **)0x0);
      if (iVar2 == 0) {
        bVar1 = createColumn_inTable_(param_1,0x1009f0710,0x1009f06f0);
        if ((bVar1 & 1) == 0) {
          pcVar6 = &cf_Alerttable__add__fail_;
          uVar4 = 0x78;
        }
        else {
          bVar1 = createColumn_inTable_(param_1,0x1009eee70,0x1009f06f0);
          if ((bVar1 & 1) != 0) {
            setIsCreatedTable_(param_1,1);
            resetAllRecordsStatus(param_1);
            uVar3 = messagesCount(param_1);
            setCount_(param_1,uVar3);
            uVar3 = count(param_1);
            objc_stub::log_level_file_function_line_context_format_
                      ((ID)&objc::class_t::SALog,1,8,
                       "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                       ,"-[SADatabase createTable]",0x87,0,
                       &cf_Create__tablesuccess_currentcountis_lu,&cf_dataCache,uVar3);
            return 1;
          }
          pcVar6 = &cf_Alerttable__add__fail_;
          uVar4 = 0x7e;
        }
      }
      else {
        pcVar6 = &cf_Create__tablefail_;
        uVar4 = 0x73;
      }
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase createTable]",uVar4,0,pcVar6,&cf_dataCache);
      setIsCreatedTable_(param_1,0);
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
  }
  return bVar1;
}

