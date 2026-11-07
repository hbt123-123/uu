// rea decompile_all
// name: FUN_1004fab20
// address: 0x1004fab20
// body: available
// range: 0x1004fab20-0x1004fac33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004fac30 to 0x1007dbe54 _$sScI4next7ElementQzSgyYaKFTj (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fab20(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  *(undefined8 *)(unaff_x22 + 0x38) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,uVar6,PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar4 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004fabc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,1);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (uVar5,uVar6,lVar1,PTR___sSciTL_100996088,PTR___sSci13AsyncIteratorSci_ScITn_100996078);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_100996008 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1004fac34;
  __sScI4next7ElementQzSgyYaKFTj(plVar3,unaff_x22 + 0x60,lVar1,uVar5);
  return;
}

