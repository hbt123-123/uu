// rea decompile_all
// name: FUN_1004fac9c
// address: 0x1004fac9c
// body: available
// range: 0x1004fac9c-0x1004faf63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004faf38 to 0x1007dbe54 _$sScI4next7ElementQzSgyYaKFTj (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fac9c(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  bVar1 = *(byte *)(unaff_x22 + 0x60);
  uVar8 = *(ulong *)(unaff_x22 + 0x30);
  if ((*(byte *)(unaff_x22 + 0x61) & 1) == 0) {
    if (0x1c < uVar8) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar4 = *(long *)(unaff_x22 + 0x48);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar2 = 0;
      __sSqMa(0,uVar5);
      (**(code **)(*(long *)(lVar2 + -8) + 8))(uVar10,lVar2);
      (**(code **)(lVar4 + 0x38))(uVar10,1,1,uVar5);
      plVar3 = (long *)0x0;
      FUN_10054df34();
      _swift_allocObject();
      *(undefined1 *)(plVar3 + 2) = 1;
      plVar3[3] = -0x2fffffffffffff7a;
      plVar3[4] = -0x7ffffffeff743790;
      plVar3[5] = 0x497261567478656e;
      plVar3[6] = -0x13ffffffd6d78b92;
      plVar3[7] = (long)&DAT_d000000000000028;
      plVar3[8] = -0x7ffffffeff7437c0;
      plVar3[9] = 0x77;
      plVar6 = plVar3;
      FUN_1004f9a1c();
      _swift_allocError(&DAT_1009d16f0,plVar6,0,0);
      *plVar6 = (long)plVar3;
      goto LAB_1004fae30;
    }
    uVar7 = *(ulong *)(unaff_x22 + 0x38) | ((ulong)bVar1 & 0x7f) << (uVar8 & 0x3f);
    if (-1 < (char)bVar1) goto LAB_1004faf40;
    *(ulong *)(unaff_x22 + 0x30) = uVar8 + 7;
    *(ulong *)(unaff_x22 + 0x38) = uVar7;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar5,uVar10,PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
    *(long *)(unaff_x22 + 0x40) = lVar4;
    lVar2 = *(long *)(lVar4 + -8);
    *(long *)(unaff_x22 + 0x48) = lVar2;
    (**(code **)(lVar2 + 0x30))(uVar11,1,lVar4);
    if ((int)uVar11 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar5,uVar10,lVar4,PTR___sSciTL_100996088,
                 PTR___sSci13AsyncIteratorSci_ScITn_100996078);
      plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_100996008 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x50) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1004fac34;
      __sScI4next7ElementQzSgyYaKFTj(plVar6,(byte *)(unaff_x22 + 0x60),lVar4,uVar5);
      return;
    }
  }
  else if (uVar8 == 0) {
    uVar7 = 0;
LAB_1004faf40:
                    /* WARNING: Could not recover jumptable at 0x0001004faf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar7);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  puVar9 = *(undefined1 **)(unaff_x22 + 0x18);
  lVar2 = 0;
  __sSqMa(0,uVar5);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar9,lVar2);
  (**(code **)(lVar4 + 0x38))(puVar9,1,1,uVar5);
  FUN_1004faf70();
  _swift_allocError(&DAT_1009ce0a8,puVar9,0,0);
  *puVar9 = 1;
LAB_1004fae30:
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001004fae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

