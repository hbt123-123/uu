// rea decompile_all
// name: FUN_1004fb26c
// address: 0x1004fb26c
// body: available
// range: 0x1004fb26c-0x1004fb4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004fb4cc to 0x1007dbe54 _$sScI4next7ElementQzSgyYaKFTj (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fb26c(void)

{
  undefined1 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x70);
  if ((*(byte *)(unaff_x22 + 0x71) & 1) == 0) {
    uVar3 = *(ulong *)(unaff_x22 + 0x50);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar10 = *(long *)(unaff_x22 + 0x50);
    if ((uVar3 & 1) == 0) {
      FUN_1004fbdfc();
    }
    uVar3 = *(ulong *)(unaff_x22 + 0x58);
    uVar7 = *(ulong *)(lVar10 + 0x10);
    if (uVar7 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fb4e4);
      (*pcVar2)();
    }
    lVar9 = *(long *)(unaff_x22 + 0x38);
    *(undefined1 *)(lVar10 + 0x20 + uVar3) = uVar1;
    lVar6 = uVar3 + 1;
    if (lVar6 == lVar9) {
      if (*(ulong *)(unaff_x22 + 0x38) < uVar7) {
        _swift_bridgeObjectRetain(lVar10);
        FUN_1004fa408();
      }
      else {
        _swift_bridgeObjectRetain(lVar10);
        FUN_1004fa13c();
      }
      uVar3 = *(long *)(unaff_x22 + 0x30) - *(long *)(unaff_x22 + 0x38);
      if (0 < (long)uVar3) {
        do {
          *(ulong *)(unaff_x22 + 0x30) = uVar3;
          uVar8 = *(ulong *)(lVar10 + 0x10);
          uVar7 = uVar8;
          if (uVar3 <= uVar8) {
            uVar7 = uVar3;
          }
          *(ulong *)(unaff_x22 + 0x38) = uVar7;
          if (uVar8 != 0) {
            lVar6 = 0;
            uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
            *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
            uVar12 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x10);
            *(undefined8 *)(unaff_x22 + 0x48) = uVar12;
            goto LAB_1004fb3a8;
          }
          _swift_bridgeObjectRetain(lVar10);
          FUN_1004fa13c();
          uVar3 = *(long *)(unaff_x22 + 0x30) - *(long *)(unaff_x22 + 0x38);
        } while (uVar3 != 0 && *(long *)(unaff_x22 + 0x38) <= *(long *)(unaff_x22 + 0x30));
      }
      _swift_bridgeObjectRelease(lVar10);
                    /* WARNING: Could not recover jumptable at 0x0001004fb38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
      return;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
LAB_1004fb3a8:
    *(long *)(unaff_x22 + 0x50) = lVar10;
    *(long *)(unaff_x22 + 0x58) = lVar6;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar10 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar11,uVar12,PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
    (**(code **)(*(long *)(lVar10 + -8) + 0x30))(uVar13,1,lVar10);
    if ((int)uVar13 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar11,uVar12,lVar10,PTR___sSciTL_100996088,
                 PTR___sSci13AsyncIteratorSci_ScITn_100996078);
      plVar5 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_100996008 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x60) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1004fb1fc;
      __sScI4next7ElementQzSgyYaKFTj(plVar5,(undefined1 *)(unaff_x22 + 0x70),lVar10,uVar11);
      return;
    }
  }
  puVar4 = *(undefined1 **)(unaff_x22 + 0x10);
  _swift_bridgeObjectRelease();
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_1004faf70();
  _swift_allocError(&DAT_1009ce0a8,puVar4,0,0);
  *puVar4 = 1;
  _swift_willThrow();
  _swift_bridgeObjectRelease(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001004fb454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

