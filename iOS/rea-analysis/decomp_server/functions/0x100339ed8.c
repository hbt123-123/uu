// rea decompile_all
// name: FUN_100339ed8
// address: 0x100339ed8
// body: available
// range: 0x100339ed8-0x10033a08b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100339ed8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar11 = *(long *)(param_1 + 0x10);
  uVar10 = *(ulong *)(lVar11 + 0x10);
  if (uVar10 != 0) {
    FUN_1002c0aec(0,uVar10,0);
    uVar12 = 0;
    puVar13 = (undefined8 *)(lVar11 + 0x38);
    do {
      if (*(ulong *)(lVar11 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10033a08c);
        (*pcVar5)();
      }
      uVar8 = puVar13[-3];
      uVar2 = puVar13[-2];
      uVar9 = puVar13[-1];
      uVar3 = *puVar13;
      _swift_bridgeObjectRetain_n(uVar2,2);
      _swift_bridgeObjectRetain(uVar3);
      __sSS6appendyySSF(0x203a,0xe200000000000000);
      __sSS6appendyySSF(uVar9,uVar3);
      __sSS6appendyySSF(0xa0d,0xe200000000000000);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1002c0aec(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar2;
      puVar13 = puVar13 + 4;
    } while (uVar10 != uVar12);
  }
  puVar6 = &DAT_100a82770;
  FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
  puVar7 = puVar6;
  FUN_100280754();
  uVar8 = 0;
  uVar9 = 0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar6,puVar7);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRetain(uVar9);
  __sSS6appendyySSF(0xa0d,0xe200000000000000);
  _swift_bridgeObjectRelease(uVar9);
  FUN_1002bd428(uVar8,uVar9);
  return;
}

