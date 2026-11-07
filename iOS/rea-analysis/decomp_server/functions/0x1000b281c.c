// rea decompile_all
// name: FUN_1000b281c
// address: 0x1000b281c
// body: available
// range: 0x1000b281c-0x1000b298b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b28f8 to 0x1000b5de0 FUN_1000b5de0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b281c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = 0;
  FUN_100401b14();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  uVar2 = 0;
  FUN_1003fb48c(FUN_1000b2b30,0,0xd000000000000099,0x8000000100881de0,&DAT_d000000000000013,
                0x8000000100882250,0x116,0);
  FUN_1000b4904();
  if ((uVar2 & 1) == 0) {
    FUN_1003fb48c(FUN_1000b2b5c,0,0xd000000000000099,0x8000000100881de0,&DAT_d000000000000013,
                  0x8000000100882250,0x11d,0);
    uVar1 = 2;
  }
  else {
    uVar2 = 0;
    FUN_1003a9990();
    FUN_1003a8848();
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x30) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1000b298c;
      FUN_1000b5de0(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
      return;
    }
    FUN_1003fb4ec(FUN_1000b2b88,0,0xd000000000000099,0x8000000100881de0,&DAT_d000000000000013,
                  0x8000000100882250,0x122,0);
    FUN_10010be48(0);
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000b2988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}

