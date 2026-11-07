// rea decompile_all
// name: FUN_10053826c
// address: 0x10053826c
// body: available
// range: 0x10053826c-0x1005383d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010053833c) */

uint FUN_10053826c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_70 [16];
  
  lVar6 = *(long *)(param_4 - 8);
  uVar1 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = auStack_70 + -uVar1;
  lVar4 = (long)puVar5 - uVar1;
  uVar1 = param_4;
  FUN_10051dbc8(param_4,param_1,param_2,param_3,param_4);
  if (((uVar1 & 1) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x10))(puVar5);
    FUN_1005383d4(lVar4,puVar5,param_4,param_6);
    FUN_100538078();
    pcVar3 = *(code **)(lVar6 + 0x20);
    (*pcVar3)(puVar5);
    __sSQ2eeoiySbx_xtFZTj(lVar4,puVar5,param_4,param_5);
    (**(code **)(lVar6 + 8))(puVar5,param_4);
    uVar2 = (uint)lVar4 ^ 1;
    (*pcVar3)();
  }
  return uVar2 & 1;
}

