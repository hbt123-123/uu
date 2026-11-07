// rea decompile_all
// name: FUN_1001a4c9c
// address: 0x1001a4c9c
// body: available
// range: 0x1001a4c9c-0x1001a4def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001a4c9c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar8 = *(long *)(*(long *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::systemDirs) + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)
             (*(long *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::systemDirs) + 0x28);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      lVar3 = puVar9[-1];
      uVar1 = *puVar9;
      _swift_bridgeObjectRetain(uVar1);
      FUN_1001aace4(lVar3,uVar1);
      _swift_bridgeObjectRelease(uVar1);
      lVar6 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)(puVar5 + 0x10);
      if (SCARRY8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001a4de4);
        (*pcVar2)();
      }
      puVar4 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar4 == 0) || ((long)(*(ulong *)(puVar5 + 0x18) >> 1) < lVar7 + lVar6)) {
        FUN_100036690();
        puVar5 = puVar4;
        if (*(long *)(lVar3 + 0x10) != 0) goto LAB_1001a4d70;
LAB_1001a4ce0:
        _swift_bridgeObjectRelease(lVar3);
        puVar4 = puVar5;
        if (lVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001a4de8);
          (*pcVar2)();
        }
      }
      else {
        puVar4 = puVar5;
        if (*(long *)(lVar3 + 0x10) == 0) goto LAB_1001a4ce0;
LAB_1001a4d70:
        if ((long)((*(ulong *)(puVar4 + 0x18) >> 1) - *(long *)(puVar4 + 0x10)) < lVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001a4dec);
          (*pcVar2)();
        }
        _swift_arrayInitWithCopy
                  (puVar4 + *(long *)(puVar4 + 0x10) * 0x10 + 0x20,lVar3 + 0x20,lVar6,&DAT_10099a510
                  );
        _swift_bridgeObjectRelease(lVar3);
        if (lVar6 != 0) {
          if (SCARRY8(*(long *)(puVar4 + 0x10),lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001a4df0);
            (*pcVar2)();
          }
          *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + lVar6;
        }
      }
      puVar9 = puVar9 + 2;
      lVar8 = lVar8 + -1;
      puVar5 = puVar4;
    } while (lVar8 != 0);
  }
  return puVar4;
}

