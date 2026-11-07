// rea decompile_all
// name: FUN_100078ddc
// address: 0x100078ddc
// body: available
// range: 0x100078ddc-0x100079047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100078ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68;
  
  uVar6 = param_3;
  FUN_100093b84();
  uVar3 = unaff_x20;
  FUN_1000b3d2c();
  if (uVar3 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar3 & 0xffffffffffffff8;
    if ((long)uVar3 < 0) {
      uVar8 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar8 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    lVar7 = *(long *)(PTR___swiftEmptyArrayStorage_1000f0740 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_b8 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100079a34(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100079048);
      (*pcVar2)();
    }
    uVar9 = 0;
    do {
      puVar5 = local_b8;
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar9 * 8 + 0x20);
        _swift_retain();
      }
      else {
        uVar4 = uVar9;
        FUN_1000794e0(uVar9,uVar3);
      }
      uVar11 = *(undefined8 *)(uVar4 + 0x18);
      uVar10 = *(undefined8 *)(uVar4 + 0x10);
      _swift_release();
      uVar4 = *(ulong *)(puVar5 + 0x10);
      local_b8 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar4) {
        FUN_100079a34(1 < *(ulong *)(puVar5 + 0x18),uVar4 + 1,1);
      }
      puVar5 = local_b8;
      uVar9 = uVar9 + 1;
      *(ulong *)(local_b8 + 0x10) = uVar4 + 1;
      *(undefined8 *)(local_b8 + uVar4 * 0x10 + 0x28) = uVar11;
      *(undefined8 *)(local_b8 + uVar4 * 0x10 + 0x20) = uVar10;
    } while (uVar8 != uVar9);
    _swift_bridgeObjectRelease(uVar3);
    lVar7 = *(long *)(puVar5 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = &DAT_100103f10;
    FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(puVar5 + 0x20) = uVar10;
  }
  _swift_bridgeObjectRelease(uVar6);
  _swift_release(param_5);
  _swift_release(unaff_x20);
  FUN_1000a9b8c(&local_b8,puVar5,(uint)param_3 & 1);
  auVar1._8_8_ = uStack_98;
  auVar1._0_8_ = local_a0;
  local_68 = local_b8;
  _swift_bridgeObjectRetain(uStack_98);
  FUN_10001fc18(&local_68,&DAT_100104430,&DAT_1000d4888);
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  FUN_100077ccc(&local_80);
  _swift_bridgeObjectRelease(uStack_98);
  local_88 = local_90;
  FUN_10001fc18(&local_88,&DAT_100104530,&DAT_1000d4ba0);
  return auVar1;
}

