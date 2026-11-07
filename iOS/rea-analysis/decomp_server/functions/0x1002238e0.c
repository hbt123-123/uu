// rea decompile_all
// name: FUN_1002238e0
// address: 0x1002238e0
// body: available
// range: 0x1002238e0-0x1002239c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002238e0(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100a7e718;
  FUN_100004bb4(&DAT_100a7e718,&DAT_100813648);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  FUN_10022403c();
  lVar4 = lVar3;
  FUN_10021bec0(lVar3,&DAT_100b362e8);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar6,0xd000000000000011,0x80000001008a6130);
  lVar7 = *(long *)(lVar3 + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(lVar4,puVar6,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002239c4);
  (*pcVar1)();
}

