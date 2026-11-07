// rea decompile_all
// name: FUN_100035668
// address: 0x100035668
// body: available
// range: 0x100035668-0x10003582b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100035668(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar4 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar10 = *param_1;
  lVar9 = *(long *)(lVar10 + 0x10);
  if (lVar9 == 0) {
    uVar8 = 0xec00000073435020;
    uVar7 = 0x64756f6c63206f4e;
  }
  else {
    FUN_100021c68(0,lVar9,0);
    puVar6 = (undefined8 *)(lVar10 + 0x28);
    do {
      uVar7 = puVar6[-1];
      uVar2 = *puVar6;
      uVar8 = puVar6[1];
      uVar3 = puVar6[2];
      uVar11 = puVar6[4];
      _swift_bridgeObjectRetain_n(uVar3,2);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar11);
      __sSS6appendyySSF(0x2820,0xe200000000000000);
      __sSS6appendyySSF(uVar7,uVar2);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      _swift_bridgeObjectRelease(uVar11);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_100021c68(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar3;
      puVar6 = puVar6 + 6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar5 = &DAT_100102c38;
    FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
    puVar6 = &DAT_100102c40;
    FUN_10002cf3c(&DAT_100102c40,&DAT_100102c38,&DAT_1000d1b90,PTR___sSayxGSKsMc_1000f0378);
    uVar7 = 10;
    uVar8 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar5,puVar6);
    _swift_release(puVar4);
  }
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar7;
  return auVar12;
}

