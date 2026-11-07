// rea decompile_all
// name: FUN_1005099b4
// address: 0x1005099b4
// body: available
// range: 0x1005099b4-0x100509adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005099b4(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar5 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar5 = 5;
  }
  lVar1 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar1 = lVar5;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar1 = 2;
  }
  lVar5 = 1;
  if (0x7f < param_2 << 3) {
    lVar5 = lVar1;
  }
  lVar1 = *unaff_x20 + lVar5;
  if (SCARRY8(*unaff_x20,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100509ad4);
    (*pcVar2)();
  }
  local_60 = 0;
  uVar3 = 0;
  local_70 = param_3;
  uStack_68 = param_4;
  uStack_58 = param_1;
  __sSaMa(0,param_3);
  puVar4 = PTR___sSayxGSTsMc_100995898;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar3);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&local_48,&local_60,FUN_10050bd58,auStack_80,uVar3,PTR___sSiN_100995968,puVar4);
  lVar5 = local_48;
  FUN_1005630a4();
  if (SCARRY8(lVar5,local_48)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100509ad8);
    (*pcVar2)();
  }
  if (!SCARRY8(lVar1,lVar5 + local_48)) {
    *unaff_x20 = lVar1 + lVar5 + local_48;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100509adc);
  (*pcVar2)();
}

