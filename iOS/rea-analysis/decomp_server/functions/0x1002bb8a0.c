// rea decompile_all
// name: FUN_1002bb8a0
// address: 0x1002bb8a0
// body: available
// range: 0x1002bb8a0-0x1002bba73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bb8a0(long param_1,ulong *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      lVar1 = puVar11[-3];
      uVar3 = puVar11[-2];
      uVar2 = puVar11[-1];
      uVar4 = *puVar11;
      uVar12 = *param_2;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      lVar6 = lVar1;
      uVar7 = uVar3;
      FUN_1002bbc2c(lVar1,uVar3,uVar12);
      if ((uVar7 & 1) == 0) {
        puVar8 = &DAT_100a833e8;
        FUN_100004bb4(&DAT_100a833e8,&DAT_1008178c0);
        _swift_initStackObject();
        *(undefined8 *)(puVar8 + 0x18) = 2;
        *(undefined8 *)(puVar8 + 0x10) = 1;
        *(long *)(puVar8 + 0x20) = lVar1;
        *(ulong *)(puVar8 + 0x28) = uVar3;
        *(undefined8 *)(puVar8 + 0x30) = uVar2;
        *(undefined8 *)(puVar8 + 0x38) = uVar4;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002bba74);
          (*pcVar5)();
        }
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        FUN_1002c0f64(lVar6,lVar6 + 1,puVar8);
        _swift_setDeallocating(puVar8);
        _swift_arrayDestroy(puVar8 + 0x20,*(undefined8 *)(puVar8 + 0x10),&DAT_1009ad080);
      }
      else {
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        uVar7 = uVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar9 = uVar12;
        if ((uVar7 & 1) == 0) {
          uVar9 = 0;
          FUN_1002966ec(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
        }
        uVar7 = *(ulong *)(uVar9 + 0x10);
        uVar12 = uVar9;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar7) {
          uVar12 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1002966ec(uVar12,uVar7 + 1,1,uVar9);
        }
        *(ulong *)(uVar12 + 0x10) = uVar7 + 1;
        lVar6 = uVar12 + uVar7 * 0x20;
        *(long *)(lVar6 + 0x20) = lVar1;
        *(ulong *)(lVar6 + 0x28) = uVar3;
        *(undefined8 *)(lVar6 + 0x30) = uVar2;
        *(undefined8 *)(lVar6 + 0x38) = uVar4;
        *param_2 = uVar12;
      }
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      puVar11 = puVar11 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

