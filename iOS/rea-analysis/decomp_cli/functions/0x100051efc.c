// rea decompile_all
// name: FUN_100051efc
// address: 0x100051efc
// body: available
// range: 0x100051efc-0x10005203f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100051efc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
  if ((*(byte *)(unaff_x20 + 1) & 1) != 0) {
    puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
    if (*(undefined **)(unaff_x20 + 0x20) != (undefined *)0x0) {
      puVar1 = *(undefined **)(unaff_x20 + 0x20);
    }
    lVar6 = *(long *)(puVar1 + 0x10);
    if (lVar6 == 0) {
      _swift_bridgeObjectRetain();
    }
    else {
      _swift_bridgeObjectRetain();
      FUN_1000798d0(0,lVar6,0);
      puVar7 = (undefined8 *)(puVar1 + 0x30);
      do {
        uVar2 = puVar7[-1];
        uVar4 = *puVar7;
        if (*(char *)(puVar7 + -2) == '\0') {
          local_78 = 0x2d2d;
          local_70 = 0xe200000000000000;
        }
        else {
          local_78 = 0x2d;
          local_70 = 0xe100000000000000;
        }
        _swift_bridgeObjectRetain(uVar4);
        __sSS6appendyySSF(uVar2,uVar4);
        _swift_bridgeObjectRelease(uVar4);
        uVar3 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
          FUN_1000798d0(1 < *(ulong *)(puVar5 + 0x18),uVar3 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar5 + uVar3 * 0x10 + 0x20) = local_78;
        *(undefined8 *)(puVar5 + uVar3 * 0x10 + 0x28) = local_70;
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    _swift_bridgeObjectRelease(puVar1);
  }
  return puVar5;
}

