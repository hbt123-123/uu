// rea decompile_all
// name: FUN_1000a0cd4
// address: 0x1000a0cd4
// body: available
// range: 0x1000a0cd4-0x1000a0df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a0df4 to 0x1007df160 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a0cd4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x22;
  long lVar9;
  
  pcVar1 = *(code **)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x68;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1000a0df8;
  lVar4 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar4,1);
  puVar5 = &DAT_100a76920;
  FUN_100004bb4(&DAT_100a76920,&DAT_10080b400);
  lVar9 = *(long *)(puVar5 + -8);
  uVar6 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  _swift_bridgeObjectRetain(uVar3);
  puVar7 = &DAT_100a76928;
  FUN_100004bb4(&DAT_100a76928,&DAT_10080b408);
  puVar8 = &DAT_100a75b40;
  FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
  __sScC12continuation8functionScCyxq_GSccyxq_G_SStcfC
            (uVar6,lVar4,uVar2,uVar3,puVar7,puVar8,PTR___ss5ErrorWS_100995c48);
  (*pcVar1)(uVar6);
  (**(code **)(lVar9 + 8))(uVar6,puVar5);
  _swift_task_dealloc(uVar6);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

