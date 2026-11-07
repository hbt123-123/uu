// rea decompile_all
// name: FUN_1002bcd08
// address: 0x1002bcd08
// body: available
// range: 0x1002bcd08-0x1002bce87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002bcd08(long param_1)

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
  undefined1 auVar10 [16];
  
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    FUN_1002c0aec(0,lVar9,0);
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = puVar6[-3];
      uVar2 = puVar6[-2];
      uVar8 = puVar6[-1];
      uVar3 = *puVar6;
      _swift_bridgeObjectRetain_n(uVar2,2);
      _swift_bridgeObjectRetain(uVar3);
      __sSS6appendyySSF(0x203a,0xe200000000000000);
      __sSS6appendyySSF(uVar8,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1002c0aec(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar7;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar2;
      puVar6 = puVar6 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  puVar5 = &DAT_100a82770;
  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
  puVar6 = &DAT_100a82778;
  FUN_10003f840(&DAT_100a82778,&DAT_100a82770,&DAT_1008186c0,PTR___sSayxGSKsMc_100995888);
  uVar7 = 10;
  uVar8 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar5,puVar6);
  _swift_bridgeObjectRelease(puVar4);
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}

