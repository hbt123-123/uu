// rea decompile_all
// name: FUN_100075a04
// address: 0x100075a04
// body: available
// range: 0x100075a04-0x100075c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100075c0c to 0x1000c2828 _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100075a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_x5;
  
  puVar2 = &DAT_100104520;
  FUN_10000eb08(&DAT_100104520,&DAT_1000d4b80);
  puVar3 = puVar2;
  _swift_allocObject();
  puVar1 = PTR___sSSN_1000f02f8;
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined **)(puVar3 + 0x38) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = 10;
  *(undefined8 *)(puVar3 + 0x28) = 0xe100000000000000;
  puVar4 = puVar3;
  FUN_10007677c();
  __ss5print_9separator10terminator2toyypd_S2Sxzts16TextOutputStreamRzlF
            (puVar3,0x20,0xe100000000000000,10,0xe100000000000000,in_x5,&DAT_1000fb4d0,puVar4);
  _swift_bridgeObjectRelease(puVar3);
  puVar3 = puVar2;
  _swift_allocObject(puVar2,0x40,7);
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  uVar5 = 0x2d;
  uVar6 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x2d,0xe100000000000000,0x46);
  *(undefined **)(puVar3 + 0x38) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  __ss5print_9separator10terminator2toyypd_S2Sxzts16TextOutputStreamRzlF
            (puVar3,0x20,0xe100000000000000,10,0xe100000000000000,in_x5,&DAT_1000fb4d0,puVar4);
  _swift_bridgeObjectRelease(puVar3);
  puVar3 = puVar2;
  _swift_allocObject(puVar2,0x40,7);
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined **)(puVar3 + 0x38) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  _swift_bridgeObjectRetain(param_2);
  __ss5print_9separator10terminator2toyypd_S2Sxzts16TextOutputStreamRzlF
            (puVar3,0x20,0xe100000000000000,10,0xe100000000000000,in_x5,&DAT_1000fb4d0,puVar4);
  _swift_bridgeObjectRelease(puVar3);
  puVar3 = puVar2;
  _swift_allocObject(puVar2,0x40,7);
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  uVar5 = 0x2d;
  uVar6 = 0xe100000000000000;
  __sSS9repeating5countS2S_SitcfC(0x2d,0xe100000000000000,0x46);
  *(undefined **)(puVar3 + 0x38) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  __ss5print_9separator10terminator2toyypd_S2Sxzts16TextOutputStreamRzlF
            (puVar3,0x20,0xe100000000000000,10,0xe100000000000000,in_x5,&DAT_1000fb4d0,puVar4);
  _swift_bridgeObjectRelease(puVar3);
  _swift_allocObject(puVar2,0x40,7);
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = 10;
  *(undefined8 *)(puVar2 + 0x28) = 0xe100000000000000;
  __ss5print_9separator10terminator2toyypd_S2Sxzts16TextOutputStreamRzlF();
  _swift_bridgeObjectRelease(puVar2);
                    /* WARNING: Subroutine does not return */
  _exit(1);
}

