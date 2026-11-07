// rea decompile_all
// name: FUN_100068a04
// address: 0x100068a04
// body: available
// range: 0x100068a04-0x100068b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100068a04(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_88 = param_11;
  uVar1 = 0xff;
  local_80 = param_5;
  uStack_78 = param_6;
  local_6c = param_7;
  local_68 = param_1;
  __sSqMa(0xff,param_8);
  lVar2 = 0;
  FUN_100098548(0,uVar1);
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  _swift_allocObject(param_10,0x89,7);
  uVar7 = param_4[1];
  uVar6 = *param_4;
  uVar5 = param_4[2];
  *(undefined8 *)(param_10 + 0x40) = param_4[3];
  *(undefined8 *)(param_10 + 0x38) = uVar5;
  uVar5 = param_4[4];
  uVar9 = param_4[7];
  uVar8 = param_4[6];
  *(undefined8 *)(param_10 + 0x50) = param_4[5];
  *(undefined8 *)(param_10 + 0x48) = uVar5;
  *(undefined8 *)(param_10 + 0x60) = uVar9;
  *(undefined8 *)(param_10 + 0x58) = uVar8;
  *(undefined8 *)(param_10 + 0x10) = param_8;
  *(undefined8 *)(param_10 + 0x18) = param_9;
  *(undefined8 *)(param_10 + 0x20) = param_2;
  *(undefined8 *)(param_10 + 0x68) = param_4[8];
  *(undefined8 *)(param_10 + 0x30) = uVar7;
  *(undefined8 *)(param_10 + 0x28) = uVar6;
  *(undefined1 *)(param_10 + 0x70) = param_3;
  *(undefined8 *)(param_10 + 0x78) = local_80;
  *(undefined8 *)(param_10 + 0x80) = uStack_78;
  *(char *)(param_10 + 0x88) = (char)local_6c;
  FUN_100098b0c(auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0),local_88,param_10,uVar1);
  (**(code **)(lVar4 + 0x20))(local_68,auStack_90 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}

