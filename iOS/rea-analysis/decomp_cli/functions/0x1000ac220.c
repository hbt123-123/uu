// rea decompile_all
// name: FUN_1000ac220
// address: 0x1000ac220
// body: available
// range: 0x1000ac220-0x1000ac43b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000ac220(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  
  puVar4 = PTR___swiftEmptyArrayStorage_1000f0740;
  uVar9 = 0;
  uVar12 = *(ulong *)(param_1 + 0x10);
  do {
    puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
    uVar10 = uVar9;
    pbVar5 = (byte *)(param_1 + 0x30 + uVar9 * 0x18);
    do {
      pbVar11 = pbVar5;
      if (uVar12 == uVar10) {
        uVar9 = 0;
        do {
          uVar10 = uVar9;
          pbVar5 = (byte *)(param_1 + 0x30 + uVar9 * 0x18);
          do {
            pbVar11 = pbVar5;
            if (uVar12 == uVar10) {
              FUN_10006dae8(puVar7);
              return puVar4;
            }
            if (uVar12 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1000ac438);
              (*pcVar6)();
            }
            uVar9 = uVar10 + 1;
            if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1000ac43c);
              (*pcVar6)();
            }
            bVar3 = *pbVar11;
            uVar10 = uVar10 + 1;
            pbVar5 = pbVar11 + 0x18;
          } while ((bVar3 & 0xc0) == 0x40);
          uVar1 = *(undefined8 *)(pbVar11 + -0x10);
          uVar2 = *(undefined8 *)(pbVar11 + -8);
          FUN_100065610(uVar1,uVar2,bVar3);
          puVar8 = puVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar8 & 1) == 0) {
            FUN_1000799e4(0,*(long *)(puVar7 + 0x10) + 1,1);
          }
          uVar10 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar10) {
            FUN_1000799e4(1 < *(ulong *)(puVar7 + 0x18),uVar10 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
          *(undefined8 *)(puVar7 + uVar10 * 0x18 + 0x20) = uVar1;
          *(undefined8 *)(puVar7 + uVar10 * 0x18 + 0x28) = uVar2;
          puVar7[uVar10 * 0x18 + 0x30] = bVar3;
        } while( true );
      }
      if (uVar12 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000ac430);
        (*pcVar6)();
      }
      uVar9 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000ac434);
        (*pcVar6)();
      }
      bVar3 = *pbVar11;
      uVar10 = uVar10 + 1;
      pbVar5 = pbVar11 + 0x18;
    } while ((bVar3 & 0xc0) != 0x40);
    uVar1 = *(undefined8 *)(pbVar11 + -0x10);
    uVar2 = *(undefined8 *)(pbVar11 + -8);
    _swift_bridgeObjectRetain(uVar2);
    puVar7 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_1000799e4(0,*(long *)(puVar4 + 0x10) + 1,1);
    }
    uVar10 = *(ulong *)(puVar4 + 0x10);
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
      FUN_1000799e4(1 < *(ulong *)(puVar4 + 0x18),uVar10 + 1,1);
    }
    *(ulong *)(puVar4 + 0x10) = uVar10 + 1;
    *(undefined8 *)(puVar4 + uVar10 * 0x18 + 0x20) = uVar1;
    *(undefined8 *)(puVar4 + uVar10 * 0x18 + 0x28) = uVar2;
    puVar4[uVar10 * 0x18 + 0x30] = bVar3;
  } while( true );
}

