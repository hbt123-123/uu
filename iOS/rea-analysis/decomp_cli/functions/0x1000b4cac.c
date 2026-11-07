// rea decompile_all
// name: FUN_1000b4cac
// address: 0x1000b4cac
// body: available
// range: 0x1000b4cac-0x1000b4e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000b4cac(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  local_70 = *param_1;
  local_68 = *(undefined1 *)(param_1 + 1);
  pcVar4 = (code *)param_1[2];
  bVar2 = *(byte *)(param_1 + 4);
  _swift_retain();
  if ((bVar2 & 1) == 0) {
    puVar6 = &local_70;
    (*pcVar4)(&local_78);
    lVar10 = 0;
    puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_1000f0740;
    if (local_78 != 0) {
      plVar11 = (long *)(PTR___swiftEmptyArrayStorage_1000f0740 + 0x20);
      do {
        lVar3 = local_78;
        if (lVar10 == 0) {
          if ((long)(((ulong)puVar9[3] >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b4e44);
            (*pcVar4)();
          }
          uVar8 = puVar9[3] & 0xfffffffffffffffe;
          if ((long)uVar8 < 2) {
            uVar8 = 1;
          }
          FUN_1000b4588();
          _swift_allocObject();
          puVar7 = puVar6;
          _malloc_size();
          puVar1 = (undefined8 *)((long)puVar7 + -0x19);
          if (0x1f < (long)puVar7) {
            puVar1 = puVar7 + -4;
          }
          puVar6[2] = uVar8;
          puVar6[3] = ((long)puVar1 >> 3) << 1 | 1;
          puVar7 = puVar6 + 4;
          uVar8 = (ulong)puVar9[3] >> 1;
          if (puVar9[2] != 0) {
            if (puVar6 != puVar9 || puVar9 + 4 + uVar8 <= puVar7) {
              _memmove(puVar7,puVar9 + 4,uVar8 << 3);
            }
            puVar9[2] = 0;
          }
          plVar11 = puVar7 + uVar8;
          lVar10 = ((long)puVar1 >> 3 & 0x7fffffffffffffffU) - uVar8;
          _swift_release(puVar9);
          puVar9 = puVar6;
        }
        bVar5 = SBORROW8(lVar10,1);
        lVar10 = lVar10 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b4e40);
          (*pcVar4)();
        }
        *plVar11 = lVar3;
        puVar6 = &local_70;
        (*pcVar4)(&local_78);
        plVar11 = plVar11 + 1;
      } while (local_78 != 0);
    }
  }
  else {
    lVar10 = 0;
    puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_1000f0740;
  }
  _swift_release();
  if (1 < (ulong)puVar9[3]) {
    uVar8 = (ulong)puVar9[3] >> 1;
    if (SBORROW8(uVar8,lVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000b4e48);
      (*pcVar4)();
    }
    puVar9[2] = uVar8 - lVar10;
  }
  return puVar9;
}

