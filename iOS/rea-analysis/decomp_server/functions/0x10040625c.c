// rea decompile_all
// name: FUN_10040625c
// address: 0x10040625c
// body: available
// range: 0x10040625c-0x10040640b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001004063c4) */

void FUN_10040625c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  long local_b8;
  
  lVar1 = 0;
  __s10Foundation17URLResourceValuesVMa();
  lVar7 = *(long *)(lVar1 + -8);
  local_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pcVar4 = *(code **)(lVar8 + 0x10);
  (*pcVar4)(lVar6);
  puVar2 = &DAT_100a8d368;
  FUN_100004bb4(&DAT_100a8d368,&DAT_1008236c0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSFilePosixPermissions_1009952c0;
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x40) = PTR___ss5Int16VN_100995c50;
  *(undefined2 *)(puVar2 + 0x28) = 0x1ff;
  puVar3 = puVar2;
  FUN_100406820(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_1003eacf0(puVar2 + 0x20);
  FUN_1004064c8(puVar3);
  _swift_bridgeObjectRelease(puVar3);
  __s10Foundation17URLResourceValuesVACycfC(puVar5);
  __s10Foundation17URLResourceValuesV8isHiddenSbSgvs(1);
  (*pcVar4)(param_1,lVar6,lVar1);
  __s10Foundation3URLV17setResourceValuesyyAA011URLResourceE0VKF(puVar5);
  (**(code **)(lVar7 + 8))(puVar5,local_b8);
  (**(code **)(lVar8 + 8))(lVar6,lVar1);
  return;
}

