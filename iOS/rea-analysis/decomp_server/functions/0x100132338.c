// rea decompile_all
// name: FUN_100132338
// address: 0x100132338
// body: available
// range: 0x100132338-0x1001324ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100132338(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  undefined1 auStack_a0 [16];
  ulong *local_90;
  ulong local_70;
  ulong uStack_68;
  
  FUN_1003dd50c();
  uVar5 = *param_1;
  if ((*unaff_x20 == 1) && (unaff_x20[10] == 0)) {
    lVar6 = unaff_x20[9];
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 != 0) {
      _swift_bridgeObjectRetain(uVar5);
      puVar8 = (ulong *)(lVar6 + 0x28);
      do {
        uVar1 = puVar8[-1];
        uVar2 = *puVar8;
        uVar3 = uVar1 & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar3 = uVar2 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          local_70 = uVar1;
          uStack_68 = uVar2;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_90 = &local_70;
          _swift_bridgeObjectRetain(uVar2);
          uVar3 = 0;
          FUN_100152a38(FUN_10009ff84,auStack_a0,uVar5);
          if ((uVar3 & 1) == 0) {
            uVar3 = uVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar4 = uVar5;
            if ((uVar3 & 1) == 0) {
              uVar4 = 0;
              FUN_100033898(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
            }
            uVar3 = *(ulong *)(uVar4 + 0x10);
            uVar5 = uVar4;
            if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
              uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
              FUN_100033898(uVar5,uVar3 + 1,1,uVar4);
            }
            *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
            lVar6 = uVar5 + uVar3 * 0x10;
            *(ulong *)(lVar6 + 0x20) = uVar1;
            *(ulong *)(lVar6 + 0x28) = uVar2;
          }
          else {
            _swift_bridgeObjectRelease(uVar2);
          }
        }
        puVar8 = puVar8 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      return uVar5;
    }
  }
  _swift_bridgeObjectRetain(uVar5);
  return uVar5;
}

