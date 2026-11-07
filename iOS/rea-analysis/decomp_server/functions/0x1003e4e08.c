// rea decompile_all
// name: FUN_1003e4e08
// address: 0x1003e4e08
// body: available
// range: 0x1003e4e08-0x1003e4edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e4e08(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *param_2;
  _swift_beginAccess(param_2 + 2,auStack_58,0,0);
  lVar4 = param_2[2];
  local_80 = *(undefined8 *)(lVar5 + 0x50);
  uVar1 = 0;
  uStack_78 = param_3;
  local_70 = param_4;
  local_60 = lVar4;
  __sSaMa(0);
  _swift_bridgeObjectRetain(lVar4);
  puVar2 = PTR___sSayxGSTsMc_100995898;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar1);
  pcVar3 = FUN_1003e675c;
  FUN_1003e4ee0(FUN_1003e675c,auStack_90,uVar1,PTR___ss5NeverON_100995d08,puVar2,
                PTR___ss5NeverOs5ErrorsWP_100995d10);
  _swift_bridgeObjectRelease(lVar4);
  *param_1 = pcVar3;
  return;
}

