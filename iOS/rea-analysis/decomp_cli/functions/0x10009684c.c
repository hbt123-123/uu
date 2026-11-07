// rea decompile_all
// name: FUN_10009684c
// address: 0x10009684c
// body: available
// range: 0x10009684c-0x100096aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10009684c(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  puVar4 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100096a9c);
    (*pcVar5)();
  }
  if (param_1 != 0) {
    uVar9 = *(ulong *)(param_2 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
    if (uVar9 != 0) {
      uVar12 = 0;
      uVar10 = 0;
      do {
        puVar14 = (undefined8 *)(param_2 + uVar12 * 0x10 + 0x28);
        uVar13 = uVar12;
        while( true ) {
          if (*(ulong *)(param_2 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100096a98);
            (*pcVar5)();
          }
          uVar1 = puVar14[-1];
          uVar2 = *puVar14;
          uVar12 = uVar13 + 1;
          uVar11 = *(ulong *)(puVar7 + 0x10);
          if (param_1 <= (long)uVar11) break;
          _swift_bridgeObjectRetain(uVar2);
          puVar6 = puVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_1000798d0(0,uVar11 + 1,1);
          }
          uVar13 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
            FUN_1000798d0(1 < *(ulong *)(puVar7 + 0x18),uVar13 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar13 + 1;
          *(undefined8 *)(puVar7 + uVar13 * 0x10 + 0x20) = uVar1;
          *(undefined8 *)(puVar7 + uVar13 * 0x10 + 0x28) = uVar2;
          puVar14 = puVar14 + 2;
          uVar13 = uVar12;
          if (uVar9 == uVar12) goto LAB_100096a5c;
        }
        if (uVar11 <= uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100096aa0);
          (*pcVar5)();
        }
        uVar8 = *(undefined8 *)(puVar7 + uVar10 * 0x10 + 0x20);
        uVar3 = *(undefined8 *)(puVar7 + uVar10 * 0x10 + 0x28);
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar3);
        puVar6 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1000798d0(0,*(long *)(puVar4 + 0x10) + 1,1);
        }
        uVar11 = *(ulong *)(puVar4 + 0x10);
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
          FUN_1000798d0(1 < *(ulong *)(puVar4 + 0x18),uVar11 + 1,1);
        }
        *(ulong *)(puVar4 + 0x10) = uVar11 + 1;
        *(undefined8 *)(puVar4 + uVar11 * 0x10 + 0x20) = uVar8;
        *(undefined8 *)(puVar4 + uVar11 * 0x10 + 0x28) = uVar3;
        puVar6 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_100058558();
        }
        if (*(ulong *)(puVar7 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100096aa4);
          (*pcVar5)();
        }
        uVar8 = *(undefined8 *)(puVar7 + uVar10 * 0x10 + 0x28);
        *(undefined8 *)(puVar7 + uVar10 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(puVar7 + uVar10 * 0x10 + 0x28) = uVar2;
        _swift_bridgeObjectRelease(uVar8);
        uVar11 = 0;
        if ((long)(uVar10 + 1) < param_1) {
          uVar11 = uVar10 + 1;
        }
        uVar10 = uVar11;
      } while (uVar9 - 1 != uVar13);
    }
LAB_100096a5c:
    _swift_release(puVar7);
    _swift_bridgeObjectRelease(param_2);
    param_2 = puVar4;
  }
  return param_2;
}

