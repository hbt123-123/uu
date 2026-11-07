// rea decompile_all
// name: FUN_100069150
// address: 0x100069150
// body: available
// range: 0x100069150-0x100069267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100069150(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  uVar1 = 0xff;
  local_90 = param_5;
  local_88 = param_8;
  local_80 = param_6;
  local_78 = param_9;
  local_6c = param_7;
  local_68 = param_1;
  __sSqMa(0xff,param_10);
  lVar2 = 0;
  FUN_100098548(0,uVar1);
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = (long)&local_90 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_allocObject(param_11,0x91,7);
  *(undefined8 *)(param_11 + 0x10) = param_10;
  *(undefined8 *)(param_11 + 0x18) = param_2;
  uVar5 = param_4[4];
  uVar7 = param_4[7];
  uVar6 = param_4[6];
  *(undefined8 *)(param_11 + 0x48) = param_4[5];
  *(undefined8 *)(param_11 + 0x40) = uVar5;
  *(undefined8 *)(param_11 + 0x58) = uVar7;
  *(undefined8 *)(param_11 + 0x50) = uVar6;
  *(undefined8 *)(param_11 + 0x60) = param_4[8];
  uVar7 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  *(undefined8 *)(param_11 + 0x28) = param_4[1];
  *(undefined8 *)(param_11 + 0x20) = uVar7;
  *(undefined8 *)(param_11 + 0x38) = uVar6;
  *(undefined8 *)(param_11 + 0x30) = uVar5;
  *(undefined1 *)(param_11 + 0x68) = param_3;
  *(undefined8 *)(param_11 + 0x70) = local_88;
  *(undefined8 *)(param_11 + 0x78) = local_78;
  *(undefined8 *)(param_11 + 0x80) = local_90;
  *(undefined8 *)(param_11 + 0x88) = local_80;
  *(char *)(param_11 + 0x90) = (char)local_6c;
  FUN_100098b0c(lVar3,param_12,param_11,uVar1);
  (**(code **)(lVar4 + 0x20))(local_68,lVar3,lVar2);
  return;
}

