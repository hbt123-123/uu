// rea decompile_all
// name: FUN_1005d1500
// address: 0x1005d1500
// body: available
// range: 0x1005d1500-0x1005d161f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8
FUN_1005d1500(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  void *aBlock;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  ID IVar4;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  IVar4 = *(ID *)(unaff_x20 + 0x10);
  _swift_allocObject(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  local_70 = PTR___NSConcreteStackBlock_100995490;
  local_68 = 0x42000000;
  local_60 = FUN_1000a8c3c;
  uStack_58 = param_5;
  local_50 = param_4;
  local_48 = param_3;
  aBlock = __Block_copy(&local_70);
  lVar1 = local_48;
  FUN_10004090c(param_1,param_2);
  _swift_release(lVar1);
  IVar4 = _objc_msgSend(IVar4,(SEL)*param_6,aBlock);
  __Block_release(aBlock);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_70,IVar4);
  _swift_unknownObjectRelease(IVar4);
  puVar2 = &DAT_100aadc58;
  FUN_100004bb4(&DAT_100aadc58,&DAT_10083f200);
  puVar3 = &local_78;
  _swift_dynamicCast(puVar3,&local_70,PTR___sypN_100995e88 + 8,puVar2,6);
  if ((int)puVar3 == 0) {
    local_78 = 0;
  }
  return local_78;
}

