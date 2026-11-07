// rea decompile_all
// name: FUN_10009d2a0
// address: 0x10009d2a0
// body: available
// range: 0x10009d2a0-0x10009d49f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009d498 to 0x1003f124c FUN_1003f124c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10009d49c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009d2a0(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x430);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  *(long *)(unaff_x22 + 0x438) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x440) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  *(long *)(unaff_x22 + 0x448) = lVar1;
  uVar2 = lVar1 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x450) = uVar2;
  __s10Foundation4DateVACycfC(uVar2);
  uVar3 = 0;
  FUN_100401b14();
  *(undefined8 *)(unaff_x22 + 0x458) = uVar3;
  FUN_1003fb48c(FUN_10009fc48,uVar9,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                0x800000010087fcb0,0x17,0);
  FUN_1003fb48c(FUN_1000934c4,0,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                0x800000010087fcb0,0x1a,0);
  *(undefined8 *)(unaff_x22 + 0x398) = 1;
  *(undefined8 *)(unaff_x22 + 0x3a0) = 0;
  *(undefined1 *)(unaff_x22 + 0x3a8) = 9;
  puVar4 = &DAT_100a766a8;
  FUN_100004bb4(&DAT_100a766a8,&DAT_1008103e0);
  puVar5 = &DAT_100a766b0;
  FUN_10003f840(&DAT_100a766b0,&DAT_100a766a8,&DAT_1008103e0,
                &TargetProtocolConformanceDescriptor_100820bb0);
  puVar6 = &DAT_100a766b8;
  FUN_10003f840(&DAT_100a766b8,&DAT_100a766a8,&DAT_1008103e0,
                &TargetProtocolConformanceDescriptor_100820bd8);
  lVar1 = unaff_x22 + 0x398;
  FUN_10039e070(lVar1,puVar4,0,0,0,&DAT_1009b82f0,puVar4,&PTR_PTR_100a8bc30,puVar5,puVar6);
  *(long *)(unaff_x22 + 0x460) = lVar1;
  plVar7 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x468) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10009d4a0;
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar8) {
    FUN_1003f124c(plVar7,unaff_x22 + 0x1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

