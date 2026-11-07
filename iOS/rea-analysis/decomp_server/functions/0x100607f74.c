// rea decompile_all
// name: FUN_100607f74
// address: 0x100607f74
// body: available
// range: 0x100607f74-0x10060804f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100607f74(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar4 = *param_2;
  lVar1 = 0xff;
  FUN_100608530(0xff,*(undefined8 *)(lVar4 + 0x78));
  lVar2 = 0;
  __sSqMa(0,lVar1);
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar4 + 0x80);
  _swift_beginAccess((long)param_2 + lVar4,auStack_68,0,0);
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x10))(puVar3,(long)param_2 + lVar4,lVar1);
  (**(code **)(lVar6 + 0x38))(puVar3,0,1,lVar1);
  (**(code **)(lVar5 + 0x28))(param_1,puVar3,lVar2);
  return;
}

