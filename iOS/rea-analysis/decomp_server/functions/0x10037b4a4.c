// rea decompile_all
// name: MMKV::removeStorage:rootPath:
// address: 0x10037b4a4
// body: available
// range: 0x10037b4a4-0x10037b61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool MMKV::removeStorage_rootPath_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID self;
  void **ppvVar2;
  bool bVar3;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  long local_48;
  
  local_48 = DAT_100ad1390;
  if (DAT_100ad1390 != 0) {
    FUN_100392994();
  }
  IVar1 = mmapKeyWithMMapID_rootPath_((ID)&objc::class_t::MMKV,param_3,param_4);
  self = objc_stub::objectForKey_(DAT_100ad1388,IVar1);
  if (self != 0) {
    objc_stub::removeObjectForKey_(DAT_100ad1388,IVar1);
    IVar1 = objc_stub::retainCount(self);
    if (1 < IVar1) {
      FUN_100386734(2,"libMMKV.mm","+[MMKV removeStorage:rootPath:]",0x45b,
                    "There\'s still reference on this kv: %@");
      *(undefined8 *)(self + 0x18) = 0;
    }
  }
  IVar1 = objc_stub::length(param_3);
  if (IVar1 == 0) {
    bVar3 = 0;
  }
  else {
    IVar1 = objc_stub::length(param_4);
    if (IVar1 == 0) {
      IVar1 = objc_stub::UTF8String(param_3);
      FUN_10037b888(local_60,IVar1);
      ppvVar2 = local_60;
      FUN_10038ab8c(ppvVar2,0);
      bVar3 = (bool)ppvVar2;
    }
    else {
      IVar1 = objc_stub::UTF8String(param_4);
      FUN_10037b888(local_60,IVar1);
      IVar1 = objc_stub::UTF8String(param_3);
      FUN_10037b888(local_78,IVar1);
      ppvVar2 = local_78;
      FUN_10038ab8c(ppvVar2,local_60);
      bVar3 = (bool)ppvVar2;
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  FUN_10037b92c(&local_48);
  return bVar3;
}

