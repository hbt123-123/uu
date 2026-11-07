// rea decompile_all
// name: FUN_10055a144
// address: 0x10055a144
// body: available
// range: 0x10055a144-0x10055a37b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055a144(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *unaff_x20;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  uVar12 = unaff_x20[1];
  FUN_100557a54();
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar3 = puVar11[-1];
      uVar4 = *puVar11;
      FUN_100008184(uVar3,uVar4);
      _swift_bridgeObjectRetain(uVar12);
      FUN_1004fa13c();
      _swift_bridgeObjectRetain(param_2);
      FUN_1004fa13c();
      FUN_1004f9e80(": ",2);
      uVar10 = *unaff_x20;
      uVar7 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
        FUN_100506f84(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar7 = *(ulong *)(uVar5 + 0x10);
      uVar10 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar7) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_100506f84(uVar10,uVar7 + 1,1,uVar5);
      }
      *(ulong *)(uVar10 + 0x10) = uVar7 + 1;
      *(undefined1 *)(uVar10 + uVar7 + 0x20) = 0x22;
      *unaff_x20 = uVar10;
      FUN_10055ce08(uVar3,uVar4);
      uVar10 = *unaff_x20;
      uVar7 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar10;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
        FUN_100506f84(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar7 = *(ulong *)(uVar5 + 0x10);
      uVar10 = *(ulong *)(uVar5 + 0x18);
      uVar8 = uVar10 >> 1;
      lVar1 = uVar7 + 1;
      uVar6 = uVar5;
      if (uVar8 <= uVar7) {
        uVar6 = (ulong)(1 < uVar10);
        FUN_100506f84(uVar6,lVar1,1,uVar5);
        uVar10 = *(ulong *)(uVar6 + 0x18);
        uVar8 = uVar10 >> 1;
      }
      *(long *)(uVar6 + 0x10) = lVar1;
      *(undefined1 *)(uVar6 + uVar7 + 0x20) = 0x22;
      lVar2 = uVar7 + 2;
      uVar7 = uVar6;
      if ((long)uVar8 < lVar2) {
        uVar7 = (ulong)(1 < uVar10);
        FUN_100506f84(uVar7,lVar2,1,uVar6);
      }
      puVar11 = puVar11 + 2;
      *(long *)(uVar7 + 0x10) = lVar2;
      *(undefined1 *)(uVar7 + lVar1 + 0x20) = 10;
      FUN_100006cdc(uVar3,uVar4);
      *unaff_x20 = uVar7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}

