// rea decompile_all
// name: FUN_10051c78c
// address: 0x10051c78c
// body: available
// range: 0x10051c78c-0x10051c8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10051c78c(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = 0;
  uVar11 = *(ulong *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  do {
    plVar9 = (long *)(param_1 + 0x28 + uVar10 * 0x10);
    do {
      if (uVar11 == uVar10) {
        _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100995ea0);
        _swift_bridgeObjectRelease(param_1);
        _swift_bridgeObjectRetain(puVar7);
        FUN_100008184(0,0xc000000000000000);
        _swift_bridgeObjectRelease(puVar7);
        FUN_100006cdc(0,0xc000000000000000);
        return puVar7;
      }
      if (*(ulong *)(param_1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10051c8e4);
        (*pcVar3)();
      }
      uVar10 = uVar10 + 1;
      lVar4 = plVar9[-1];
      lVar2 = *plVar9;
      _swift_bridgeObjectRetain(lVar2);
      lVar8 = lVar2;
      FUN_10051c170();
      _swift_bridgeObjectRelease(lVar2);
      plVar9 = plVar9 + 2;
    } while (lVar8 == 0);
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_100507174(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_100507174(puVar7,uVar1 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x20) = lVar4;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x28) = lVar8;
  } while( true );
}

