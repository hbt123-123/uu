// rea decompile_all
// name: FUN_100527c98
// address: 0x100527c98
// body: available
// range: 0x100527c98-0x100527fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100527c98(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x20;
  long lVar8;
  long unaff_x21;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long lStack_108;
  long local_100;
  long local_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar1 = 0;
  __sSqMa();
  lVar7 = *(long *)(uVar1 - 8);
  lVar11 = *(long *)(lVar7 + 0x40);
  uVar5 = lVar11 + 0xfU & 0xfffffffffffffff0;
  puVar10 = &stack0xfffffffffffffed0 + -uVar5;
  lVar9 = (long)puVar10 - uVar5;
  lVar6 = lVar9 - uVar5;
  uVar5 = uVar1;
  FUN_100533688();
  if ((uVar5 & 1) == 0) {
    (**(code **)(lVar7 + 0x10))(lVar9,param_1,uVar1);
    lVar11 = *(long *)(param_2 + -8);
    pcVar12 = *(code **)(lVar11 + 0x30);
    lVar6 = lVar9;
    (*pcVar12)(lVar9,1,param_2);
    (**(code **)(lVar7 + 8))(lVar9,uVar1);
    if ((int)lVar6 == 1) {
      (**(code **)(param_3 + 0x10))(puVar10,param_2,param_3);
      (**(code **)(lVar11 + 0x38))(puVar10,0,1,param_2);
      (**(code **)(lVar7 + 0x28))(param_1,puVar10,uVar1);
    }
    FUN_10052a52c(unaff_x20,&local_120);
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uVar2 = param_1;
    local_c0 = param_2;
    local_b8 = param_3;
    (*pcVar12)(param_1,1,param_2);
    if ((int)uVar2 == 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100527fd0);
      (*pcVar12)();
    }
    FUN_1005279fc(param_1,param_2,param_3);
    if (unaff_x21 == 0) {
      FUN_10052a594(&local_120,unaff_x20);
    }
    FUN_10052a568(&local_120);
  }
  else {
    lVar9 = param_2;
    _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_100900904);
    if (lVar9 == 0 || param_2 == 0) {
      (**(code **)(lVar7 + 8))(param_1,uVar1);
      (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1,param_2);
    }
    else {
      lVar11 = lVar6 - (lVar11 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar9 + 0x18))(lVar11,param_2,lVar9);
      if (unaff_x21 == 0) {
        lVar8 = *(long *)(param_2 + -8);
        lVar3 = lVar11;
        (**(code **)(lVar8 + 0x30))(lVar11,1,param_2);
        if ((int)lVar3 == 1) {
          (**(code **)(lVar7 + 8))(lVar11,uVar1);
          local_100 = 0;
          lStack_108 = 0;
          local_110 = 0;
          uStack_118 = 0;
          local_120 = 0;
        }
        else {
          lStack_108 = param_2;
          local_100 = lVar9;
          FUN_1000efc08(&local_120);
          (**(code **)(lVar8 + 0x20))();
        }
        puVar4 = &DAT_100aaa140;
        FUN_100004bb4(&DAT_100aaa140,&DAT_100837af0);
        lVar9 = lVar6;
        _swift_dynamicCast(lVar6,&local_120,puVar4,param_2,6);
        (**(code **)(lVar8 + 0x38))(lVar6,(uint)lVar9 ^ 1,1,param_2);
        (**(code **)(lVar7 + 0x28))(param_1,lVar6,uVar1);
      }
    }
  }
  return;
}

