// rea decompile_all
// name: FUN_10056594c
// address: 0x10056594c
// body: available
// range: 0x10056594c-0x100565a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056594c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar5 = *(long *)(param_4 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_1;
  local_68 = param_2;
  local_60 = param_3;
  local_58 = param_6;
  __sSa8endIndexSivg(param_1,param_4);
  if (lVar4 != 0) {
    lVar4 = 0;
    do {
      __sSayxSicig(puVar6,lVar4,param_1,param_4);
      lVar1 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100565a3c);
        (*pcVar2)();
      }
      (**(code **)(param_5 + 0x80))(puVar6,local_68,param_4,local_58,local_60,param_5);
      (**(code **)(lVar5 + 8))(puVar6,param_4);
      if (unaff_x21 != 0) {
        return;
      }
      lVar3 = param_1;
      __sSa8endIndexSivg(param_1,param_4);
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}

