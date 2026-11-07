// rea decompile_all
// name: FUN_100608050
// address: 0x100608050
// body: available
// range: 0x100608050-0x1006081a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100608050(code *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_d0 [8];
  code *local_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_88 [39];
  char local_61;
  
  lVar1 = 0;
  FUN_100608530(0,*(undefined8 *)(*unaff_x20 + 0x78));
  lVar6 = *(long *)(lVar1 + -8);
  puVar4 = auStack_d0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar3 = *(long *)(lVar2 + -8);
  lVar5 = (long)puVar4 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_61 = '\0';
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar5);
  local_c8 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (lVar5,FUN_10060905c,auStack_c0,PTR___sytN_100995e90 + 8);
  (**(code **)(lVar3 + 8))(lVar5,lVar2);
  if (local_61 == '\x01') {
    lVar2 = *(long *)(*unaff_x20 + 0x80);
    _swift_beginAccess((long)unaff_x20 + lVar2,auStack_88,0,0);
    (**(code **)(lVar6 + 0x10))(puVar4,(long)unaff_x20 + lVar2,lVar1);
    (*local_c8)(puVar4);
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
  }
  return;
}

