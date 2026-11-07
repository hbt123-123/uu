// rea decompile_all
// name: FUN_100623928
// address: 0x100623928
// body: available
// range: 0x100623928-0x100623a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100623928(long *param_1,long *param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  code *local_60;
  undefined1 auStack_58 [24];
  
  lVar6 = *param_2;
  _swift_beginAccess(param_1,auStack_58,0,0);
  if (*param_1 == 0) {
    plVar5 = (long *)param_2[2];
    lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + 0x10);
    local_80 = *(undefined8 *)(lVar6 + 0x10);
    uVar1 = 0xff;
    local_60 = param_3;
    FUN_100616218(0xff);
    uVar2 = 0;
    __sSaMa(0,uVar1);
    puVar3 = PTR___sSayxGSlsMc_1009958b0;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar2);
    pcVar4 = FUN_1006274c8;
    FUN_100620314(FUN_1006274c8,auStack_90,uVar2,lVar6,PTR___ss5NeverON_100995d08,puVar3,
                  PTR___ss5NeverOs5ErrorsWP_100995d10);
    local_60 = pcVar4;
    (**(code **)(*plVar5 + 0x68))(&local_60);
    _swift_bridgeObjectRelease(pcVar4);
  }
  return;
}

