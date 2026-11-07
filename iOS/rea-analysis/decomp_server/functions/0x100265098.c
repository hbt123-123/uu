// rea decompile_all
// name: FUN_100265098
// address: 0x100265098
// body: available
// range: 0x100265098-0x100265257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100265098(long param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 local_70;
  code *pcStack_68;
  
  puVar1 = &DAT_100a812c8;
  local_70 = param_3;
  pcStack_68 = param_2;
  FUN_100004bb4(&DAT_100a812c8,&DAT_100815398);
  lVar7 = (long)&local_70 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar6 = *(long *)(lVar2 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar7 - uVar3;
  lVar8 = lVar9 - uVar3;
  pcVar10 = *(code **)(unaff_x20 + 0x10);
  if (pcVar10 == (code *)0x0) {
    pcVar10 = *(code **)(lVar6 + 0x10);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_retain(uVar4);
    (*pcVar10)(lVar9,param_1);
    FUN_10007ed2c(pcVar10,uVar4);
    pcVar10 = *(code **)(lVar6 + 0x20);
    param_1 = lVar9;
  }
  (*pcVar10)(lVar8,param_1,lVar2);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  IVar5 = *(ID *)(lVar9 + 0x10);
  _swift_retain(lVar9);
  _objc_msgSend(IVar5,"lock");
  pcVar10 = *(code **)(lVar9 + 0x18);
  uVar4 = *(undefined8 *)(lVar9 + 0x20);
  IVar5 = *(ID *)(lVar9 + 0x10);
  FUN_10004090c(pcVar10,uVar4);
  _objc_msgSend(IVar5,"unlock");
  _swift_release(lVar9);
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(lVar8);
    FUN_10007ed2c(pcVar10,uVar4);
  }
  (**(code **)(lVar6 + 0x10))(lVar7,lVar8,lVar2);
  _swift_storeEnumTagMultiPayload(lVar7,puVar1,0);
  (*pcStack_68)(lVar7);
  FUN_100040bb4(lVar7,&DAT_100a812c8,&DAT_100815398);
  (**(code **)(lVar6 + 8))(lVar8,lVar2);
  return;
}

