// rea decompile_all
// name: FUN_1001af674
// address: 0x1001af674
// body: available
// range: 0x1001af674-0x1001af84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001af674(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
  puVar5 = (undefined8 *)(unaff_x22 + 0xc0);
  *puVar5 = uVar6;
  lVar1 = 0;
  __sScEMa();
  lVar7 = *(long *)(lVar1 + -8);
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  _swift_errorRetain(uVar6);
  puVar3 = &DAT_100a75b40;
  FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
  uVar4 = uVar2;
  _swift_dynamicCast(uVar2,puVar5,puVar3,lVar1,0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  if ((uVar4 & 1) == 0) {
    _swift_task_dealloc(uVar2);
    _swift_errorRelease(*puVar5);
    FUN_100401b14(0);
    lVar1 = 0x20;
    _swift_task_alloc();
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    FUN_1003fb4ec(FUN_1001b5830,lVar1,0xd000000000000095,0x8000000100877f50,0x6574616572636572,
                  0xee0029286d6f6f52,0x9e,0);
    _swift_errorRelease(uVar6);
    _swift_task_dealloc(lVar1);
  }
  else {
    _swift_errorRelease(uVar6);
    uVar6 = 0;
    FUN_100401b14(0);
    FUN_1003fb48c(uVar6,FUN_1001afa58,0,0xd000000000000095,0x8000000100877f50,0x6574616572636572,
                  0xee0029286d6f6f52,0x9c,0);
    (**(code **)(lVar7 + 8))(uVar2,lVar1);
    _swift_task_dealloc(uVar2);
    _swift_errorRelease(*puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001af84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

