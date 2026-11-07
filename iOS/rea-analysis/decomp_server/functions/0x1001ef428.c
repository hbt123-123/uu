// rea decompile_all
// name: FUN_1001ef428
// address: 0x1001ef428
// body: available
// range: 0x1001ef428-0x1001ef51b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ef428(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = (ulong)*(uint *)(param_3 + 0x18);
  uVar1 = (uint)(param_5 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      _write(uVar3,param_1,param_5 >> 0x30 & 0xff);
      goto joined_r0x0001001ef510;
    }
    iVar7 = (int)((ulong)param_4 >> 0x20);
    if (SBORROW4(iVar7,(int)param_4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ef51c);
      (*pcVar2)();
    }
    lVar5 = (long)(iVar7 - (int)param_4);
  }
  else {
    if (uVar6 != 2) {
      _write(uVar3,param_1,0);
      goto joined_r0x0001001ef510;
    }
    lVar5 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
    if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ef480);
      (*pcVar2)();
    }
  }
  _write(uVar3,param_1,lVar5);
joined_r0x0001001ef510:
  if ((long)uVar3 < 0) {
    uVar4 = 0;
    FUN_100401b14(0);
    FUN_1003fb4ec(uVar4,thunk_FUN_1001fa714,param_3,0xd000000000000095,0x80000001008a00c0,
                  0xd000000000000011,0x80000001008a17b0,0x2e8,0);
  }
  return;
}

