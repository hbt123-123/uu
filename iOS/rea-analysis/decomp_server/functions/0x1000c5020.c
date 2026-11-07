// rea decompile_all
// name: FUN_1000c5020
// address: 0x1000c5020
// body: available
// range: 0x1000c5020-0x1000c51e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000c5020(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar2 = param_3;
  _CGPathCreateMutable();
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar4 == 0) {
    lVar5 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fd88(0,lVar4,0);
    pdVar6 = (double *)(param_3 + 0x28);
    do {
      dVar8 = pdVar6[-1];
      dVar7 = *pdVar6;
      dVar10 = param_1 * 0.0;
      if ((0.0 < dVar8) && (dVar10 = param_1, dVar8 <= 1.0)) {
        dVar10 = dVar8 * param_1;
      }
      dVar8 = 0.0;
      if ((0.0 < dVar7) && (dVar8 = 1.0, dVar7 <= 1.0)) {
        dVar8 = dVar7;
      }
      uVar1 = *(ulong *)(local_a0 + 0x10);
      lVar5 = uVar1 + 1;
      if (*(ulong *)(local_a0 + 0x18) >> 1 <= uVar1) {
        FUN_10006fd88(1 < *(ulong *)(local_a0 + 0x18),lVar5,1);
      }
      *(long *)(local_a0 + 0x10) = lVar5;
      *(double *)(local_a0 + uVar1 * 0x10 + 0x20) = dVar10;
      *(double *)(local_a0 + uVar1 * 0x10 + 0x28) = dVar8 * param_2;
      pdVar6 = pdVar6 + 2;
      lVar4 = lVar4 + -1;
      puVar3 = local_a0;
    } while (lVar4 != 0);
  }
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      dVar10 = *(double *)(puVar3 + 0x20);
      uVar9 = *(undefined8 *)(puVar3 + 0x28);
      _swift_bridgeObjectRelease();
      local_a0 = (undefined *)0x3ff0000000000000;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0x3ff0000000000000;
      local_80 = 0;
      uStack_78 = 0;
      __sSo16CGMutablePathRefa12CoreGraphicsE4move2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar10,uVar9,&local_a0);
      __sSo16CGMutablePathRefa12CoreGraphicsE7addLine2to9transformySo7CGPointV_So17CGAffineTransformVtF
                (dVar10 + 0.5,uVar9,&local_a0);
      return lVar2;
    }
    local_a0 = (undefined *)0x3ff0000000000000;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0x3ff0000000000000;
    local_80 = 0;
    uStack_78 = 0;
    __sSo16CGMutablePathRefa12CoreGraphicsE8addLines7between9transformySaySo7CGPointVG_So17CGAffineTransformVtF
              (puVar3,&local_a0);
  }
  _swift_bridgeObjectRelease(puVar3);
  return lVar2;
}

