// rea decompile_all
// name: thunk_FUN_1002bc64c
// address: 0x1002bc648
// body: available
// range: 0x1002bc648-0x1002bc64b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * thunk_FUN_1002bc64c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x38);
    do {
      lVar1 = puVar10[-3];
      uVar3 = puVar10[-2];
      uVar2 = puVar10[-1];
      uVar4 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      lVar6 = lVar1;
      uVar9 = uVar3;
      FUN_1002bbc2c(lVar1,uVar3,puStack_68);
      if ((uVar9 & 1) == 0) {
        puVar7 = &DAT_100a833e8;
        FUN_100004bb4(&DAT_100a833e8,&DAT_1008178c0);
        _swift_initStackObject();
        *(undefined8 *)(puVar7 + 0x18) = 2;
        *(undefined8 *)(puVar7 + 0x10) = 1;
        *(long *)(puVar7 + 0x20) = lVar1;
        *(ulong *)(puVar7 + 0x28) = uVar3;
        *(undefined8 *)(puVar7 + 0x30) = uVar2;
        *(undefined8 *)(puVar7 + 0x38) = uVar4;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002bc834);
          (*pcVar5)();
        }
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        FUN_1002c0f64(lVar6,lVar6 + 1,puVar7);
        _swift_setDeallocating(puVar7);
        _swift_arrayDestroy(puVar7 + 0x20,*(undefined8 *)(puVar7 + 0x10),&DAT_1009ad080);
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uVar3);
      }
      else {
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        puVar7 = puStack_68;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puStack_68;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_1002966ec(0,*(long *)(puStack_68 + 0x10) + 1,1,puStack_68);
        }
        uVar9 = *(ulong *)(puVar8 + 0x10);
        puStack_68 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar9) {
          puStack_68 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1002966ec(puStack_68,uVar9 + 1,1,puVar8);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar9 + 1;
        *(long *)(puStack_68 + uVar9 * 0x20 + 0x20) = lVar1;
        *(ulong *)(puStack_68 + uVar9 * 0x20 + 0x28) = uVar3;
        *(undefined8 *)(puStack_68 + uVar9 * 0x20 + 0x30) = uVar2;
        *(undefined8 *)(puStack_68 + uVar9 * 0x20 + 0x38) = uVar4;
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uVar3);
      }
      puVar10 = puVar10 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  _swift_bridgeObjectRelease(param_1);
  return puStack_68;
}

