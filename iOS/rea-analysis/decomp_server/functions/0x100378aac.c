// rea decompile_all
// name: MMKV::initializeMMKV:logLevel:handler:
// address: 0x100378aac
// body: available
// range: 0x100378aac-0x100378c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100378b1c to 0x1007ee520 objc_stub::mmkvBasePath (external=false, thunk=false, hasNoReturn=false), 0x10037a4c4 MMKV::mmkvBasePath (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID MMKV::initializeMMKV_logLevel_handler_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5)

{
  ID IVar1;
  undefined *self;
  void *pvVar2;
  code *pcVar3;
  void *local_68 [2];
  char local_51;
  
  if (DAT_100ad1380 != '\x01') {
    self = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    DAT_100ad1388 = objc_stub::init((ID)self);
    pvVar2 = operator_new(0x40);
    thunk_FUN_1003928d4();
    DAT_100ad1390 = pvVar2;
    FUN_100392a80(pvVar2);
    pcVar3 = (code *)0x0;
    DAT_100ad1398 = param_5;
    if (param_5 != 0) {
      IVar1 = objc_stub::respondsToSelector_(param_5,"mmkvLogWithLevel:file:line:func:message:");
      pcVar3 = FUN_100378cb4;
      if ((int)IVar1 == 0) {
        pcVar3 = (code *)0x0;
      }
    }
    IVar1 = param_3;
    if (param_3 == 0) {
      mmkvBasePath(param_1);
      IVar1 = DAT_100ad13a0;
    }
    DAT_100ad13a0 = IVar1;
    IVar1 = objc_stub::length(DAT_100ad13a0);
    if (IVar1 == 0) {
      FUN_10037bce0(param_2,param_1);
    }
    IVar1 = objc_stub::UTF8String(DAT_100ad13a0);
    FUN_10037b888(local_68,IVar1);
    FUN_10037fc38(local_68,param_4,pcVar3);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    IVar1 = objc_stub::respondsToSelector_(DAT_100ad1398,"onMMKVCRCCheckFail:");
    if (((IVar1 & 1) != 0) ||
       (IVar1 = objc_stub::respondsToSelector_(DAT_100ad1398,"onMMKVFileLengthError:"),
       (int)IVar1 != 0)) {
      FUN_1003847f4(FUN_100378cd8);
    }
    IVar1 = objc_stub::respondsToSelector_(DAT_100ad1398,"onMMKVContentChange:");
    if ((int)IVar1 != 0) {
      FUN_100380130(FUN_100378d7c);
    }
    DAT_100ad1380 = 1;
    IVar1 = mmkvBasePath(param_1);
    return IVar1;
  }
  FUN_100386734(2,"libMMKV.mm","+[MMKV initializeMMKV:logLevel:handler:]",0x4c,
                "already called +initializeMMKV before, ignore this request");
  IVar1 = mmkvBasePath(param_1);
  return IVar1;
}

