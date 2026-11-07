// rea decompile_all
// name: FUN_1004fafcc
// address: 0x1004fafcc
// body: available
// range: 0x1004fafcc-0x1004fb1fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004fb1f4 to 0x1007dbe54 _$sScI4next7ElementQzSgyYaKFTj (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fafcc(void)

{
  size_t sVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  *(undefined8 *)(unaff_x22 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  sVar7 = *(size_t *)(unaff_x22 + 0x18);
  sVar1 = sVar7;
  if (0xffffff < (long)sVar7) {
    sVar1 = 0x1000000;
  }
  if ((long)sVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004fb1fc);
    (*pcVar3)();
  }
  if (sVar7 == 0) {
    _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100995ea0);
  }
  else {
    sVar7 = sVar1;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (sVar1,PTR___ss5UInt8VN_100995d40);
    *(size_t *)(sVar7 + 0x10) = sVar1;
    _bzero((void *)(sVar7 + 0x20),sVar1);
    uVar8 = *(ulong *)(unaff_x22 + 0x18);
    do {
      *(ulong *)(unaff_x22 + 0x30) = uVar8;
      uVar9 = *(ulong *)(sVar7 + 0x10);
      uVar2 = uVar9;
      if (uVar8 <= uVar9) {
        uVar2 = uVar8;
      }
      *(ulong *)(unaff_x22 + 0x38) = uVar2;
      if (uVar9 != 0) {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar12 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
        *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
        uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x10);
        *(size_t *)(unaff_x22 + 0x50) = sVar7;
        *(undefined8 *)(unaff_x22 + 0x58) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
        lVar4 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar12,uVar13,PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
        (**(code **)(*(long *)(lVar4 + -8) + 0x30))(uVar11,1,lVar4);
        if ((int)uVar11 != 0) {
          puVar5 = *(undefined1 **)(unaff_x22 + 0x10);
          _swift_bridgeObjectRelease();
          uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
          FUN_1004faf70();
          _swift_allocError(&DAT_1009ce0a8,puVar5,0,0);
          *puVar5 = 1;
          _swift_willThrow();
          _swift_bridgeObjectRelease(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001004fb178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        _swift_getAssociatedConformanceWitness
                  (uVar12,uVar13,lVar4,PTR___sSciTL_100996088,
                   PTR___sSci13AsyncIteratorSci_ScITn_100996078);
        plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_100996008 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x60) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1004fb1fc;
        __sScI4next7ElementQzSgyYaKFTj(plVar6,unaff_x22 + 0x70,lVar4,uVar12);
        return;
      }
      _swift_bridgeObjectRetain(sVar7);
      FUN_1004fa13c();
      uVar8 = *(long *)(unaff_x22 + 0x30) - *(long *)(unaff_x22 + 0x38);
    } while (uVar8 != 0 && *(long *)(unaff_x22 + 0x38) <= *(long *)(unaff_x22 + 0x30));
    _swift_bridgeObjectRelease(sVar7);
    puVar10 = *(undefined **)(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004fb0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar10);
  return;
}

