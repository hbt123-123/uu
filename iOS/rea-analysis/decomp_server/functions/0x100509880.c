// rea decompile_all
// name: FUN_100509880
// address: 0x100509880
// body: available
// range: 0x100509880-0x1005099b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100509880(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  long local_48;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar3;
  }
  lVar3 = param_1;
  __sSa5countSivg(param_1,param_3);
  lVar6 = lVar3 * lVar1;
  if (SUB168(SEXT816(lVar3) * SEXT816(lVar1),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005099ac);
    (*pcVar2)();
  }
  lVar1 = *unaff_x20 + lVar6;
  if (SCARRY8(*unaff_x20,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005099b0);
    (*pcVar2)();
  }
  local_60 = 0;
  uVar4 = 0;
  local_70 = param_3;
  uStack_68 = param_4;
  lStack_58 = param_1;
  __sSaMa(0,param_3);
  puVar5 = PTR___sSayxGSTsMc_100995898;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar4);
  __sSTsE6reduceyqd__qd___qd__qd___7ElementQztKXEtKlF
            (&local_48,&local_60,FUN_10050be7c,auStack_80,uVar4,PTR___sSiN_100995968,puVar5);
  if (!SCARRY8(lVar1,local_48)) {
    *unaff_x20 = lVar1 + local_48;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005099b4);
  (*pcVar2)();
}

