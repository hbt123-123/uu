// rea decompile_all
// name: FUN_100513cbc
// address: 0x100513cbc
// body: available
// range: 0x100513cbc-0x100513ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100513cbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  lVar10 = *(long *)(param_4 + -8);
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = auStack_a0 + -uVar4;
  lVar6 = (long)local_98 - uVar4;
  lVar3 = 0;
  local_90 = param_6;
  local_88 = param_1;
  local_80 = param_3;
  local_78 = param_5;
  __sSqMa(0,param_4);
  lVar8 = *(long *)(lVar3 + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar6 - uVar4;
  lVar9 = lVar7 - uVar4;
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,param_4);
  (**(code **)(param_8 + 0x198))(lVar9,param_4,param_7,local_78,param_8);
  if (unaff_x21 == 0) {
    (**(code **)(lVar8 + 0x20))(lVar7,lVar9,lVar3);
    lVar9 = lVar7;
    (**(code **)(lVar10 + 0x30))(lVar7,1,param_4);
    bVar2 = (int)lVar9 != 1;
    if (bVar2) {
      pcVar5 = *(code **)(lVar10 + 0x20);
      (*pcVar5)(lVar6,lVar7,param_4);
      puVar1 = local_98;
      (*pcVar5)(local_98,lVar6,param_4);
      lVar6 = 0;
      FUN_100515064(0,param_4,local_90,param_7);
      lVar3 = local_88;
      thunk_FUN_1000a0074(param_2,local_88 + *(int *)(lVar6 + 0x2c));
      (*pcVar5)(lVar3,puVar1,param_4);
      pcVar5 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    }
    else {
      FUN_10003f094(param_2);
      (**(code **)(lVar8 + 8))(lVar7,lVar3);
      lVar6 = 0;
      FUN_100515064(0,param_4,local_90,param_7);
      pcVar5 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
      lVar3 = local_88;
    }
    (*pcVar5)(lVar3,!bVar2,1,lVar6);
  }
  else {
    FUN_10003f094(param_2);
    (**(code **)(lVar8 + 8))(lVar9,lVar3);
  }
  return;
}

