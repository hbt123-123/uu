// rea decompile_all
// name: FUN_100078b4c
// address: 0x100078b4c
// body: available
// range: 0x100078b4c-0x100078ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100078b4c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,uint param_5,
             undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70 [2];
  
  uVar5 = param_3;
  FUN_100093b84();
  uVar4 = unaff_x20;
  FUN_1000b3d2c();
  if (uVar4 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar4 & 0xffffffffffffff8;
    if ((long)uVar4 < 0) {
      uVar7 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 == 0) {
    _swift_bridgeObjectRelease(uVar4);
    lVar6 = *(long *)(PTR___swiftEmptyArrayStorage_1000f0740 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_c8 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100079a34(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100078ddc);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      puVar3 = local_c8;
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar2 = *(ulong *)(uVar4 + uVar8 * 8 + 0x20);
        _swift_retain();
      }
      else {
        uVar2 = uVar8;
        FUN_1000794e0(uVar8,uVar4);
      }
      uVar10 = *(undefined8 *)(uVar2 + 0x18);
      uVar9 = *(undefined8 *)(uVar2 + 0x10);
      _swift_release();
      uVar2 = *(ulong *)(puVar3 + 0x10);
      local_c8 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        FUN_100079a34(1 < *(ulong *)(puVar3 + 0x18),uVar2 + 1,1);
      }
      puVar3 = local_c8;
      uVar8 = uVar8 + 1;
      *(ulong *)(local_c8 + 0x10) = uVar2 + 1;
      *(undefined8 *)(local_c8 + uVar2 * 0x10 + 0x28) = uVar10;
      *(undefined8 *)(local_c8 + uVar2 * 0x10 + 0x20) = uVar9;
    } while (uVar7 != uVar8);
    _swift_bridgeObjectRelease(uVar4);
    param_3 = param_3 & 0xffffffff;
    lVar6 = *(long *)(puVar3 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = &DAT_100103f10;
    FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(puVar3 + 0x20) = uVar9;
  }
  _swift_bridgeObjectRelease(uVar5);
  _swift_release(param_7);
  _swift_release(unaff_x20);
  FUN_1000a9b8c(&local_c8,puVar3,(uint)param_3 & 1);
  uVar4 = (ulong)(param_5 & 1);
  FUN_1000a4ab4(param_4,uVar4);
  local_70[0] = local_c8;
  FUN_10001fc18(local_70,&DAT_100104430,&DAT_1000d4888);
  uStack_78 = uStack_b8;
  local_80 = local_c0;
  FUN_100077ccc(&local_80);
  uStack_88 = uStack_a8;
  local_90 = local_b0;
  FUN_100077ccc(&local_90);
  local_98 = local_a0;
  FUN_10001fc18(&local_98,&DAT_100104530,&DAT_1000d4ba0);
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = param_4;
  return auVar11;
}

