// rea decompile_all
// name: FUN_10031c138
// address: 0x10031c138
// body: available
// range: 0x10031c138-0x10031c333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031c138(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_d0;
  code *pcStack_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  
  lVar8 = *unaff_x20;
  lVar5 = *(long *)(lVar8 + 0x58);
  lVar1 = 0;
  local_a0 = param_2;
  local_98 = param_3;
  __sSqMa(0,lVar5);
  lVar11 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&local_d0 - uVar3;
  lVar6 = lVar12 - uVar3;
  lVar7 = *(long *)(lVar5 + -8);
  local_b8 = *(long *)(lVar7 + 0x40);
  uVar3 = local_b8 + 0xfU & 0xfffffffffffffff0;
  local_b0 = lVar6 - uVar3;
  local_a8 = local_b0 - uVar3;
  local_c0 = *(undefined8 *)(lVar8 + 0x50);
  uVar9 = *(undefined8 *)(lVar8 + 0x60);
  local_80 = local_c0;
  lStack_78 = lVar5;
  local_70 = uVar9;
  FUN_1002c6bac(lVar6,param_1,auStack_90,lVar1);
  lVar2 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar5);
  lVar8 = local_a8;
  if ((int)lVar2 == 1) {
    pcVar4 = *(code **)(lVar11 + 8);
    lVar8 = lVar6;
    lVar5 = lVar1;
  }
  else {
    pcStack_c8 = *(code **)(lVar7 + 0x20);
    local_d0 = uVar9;
    (*pcStack_c8)(local_a8,lVar6,lVar5);
    (**(code **)(lVar7 + 0x38))(lVar12,1,1,lVar5);
    FUN_1002c6fd8(lVar12);
    (**(code **)(lVar11 + 8))(lVar12,lVar1);
    lVar2 = local_b0;
    pcVar4 = (code *)unaff_x20[4];
    (**(code **)(lVar7 + 0x10))(local_b0,lVar8,lVar5);
    uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
    uVar10 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
    lVar1 = local_a0;
    _swift_allocObject(local_a0,uVar10 + local_b8,uVar3 | 7);
    *(undefined8 *)(lVar1 + 0x10) = local_c0;
    *(long *)(lVar1 + 0x18) = lVar5;
    *(undefined8 *)(lVar1 + 0x20) = local_d0;
    (*pcStack_c8)(lVar1 + uVar10,lVar2,lVar5);
    uVar9 = local_98;
    (*pcVar4)(local_98,lVar1);
    _swift_release(lVar1);
    FUN_1002d3e44();
    _swift_release(uVar9);
    pcVar4 = *(code **)(lVar7 + 8);
  }
  (*pcVar4)(lVar8,lVar5);
  return;
}

