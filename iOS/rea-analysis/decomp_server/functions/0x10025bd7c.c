// rea decompile_all
// name: FUN_10025bd7c
// address: 0x10025bd7c
// body: available
// range: 0x10025bd7c-0x10025bf87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010025be34) */

void FUN_10025bd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 local_a0 [5];
  undefined8 local_78 [3];
  
  plVar1 = (long *)0x0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  puVar2 = &DAT_100a807e0;
  FUN_100004bb4(&DAT_100a807e0,&DAT_100814f50);
  puVar3 = &DAT_100a80ca8;
  FUN_10025fec0(&DAT_100a80ca8,&DAT_100a80cb0,&TargetProtocolConformanceDescriptor_100814b58,
                PTR___sSayxGSesSeRzlMc_1009958a0);
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (local_a0,puVar2,param_1,param_2,puVar2,puVar3);
  _swift_release();
  FUN_10025b638();
  local_78[0] = local_a0[0];
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &DAT_1009a8798;
  _swift_allocObject(&DAT_1009a8798,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  puVar3 = &DAT_1009a87c0;
  _swift_allocObject(&DAT_1009a87c0,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_5;
  pcVar4 = *(code **)(*plVar1 + 0xd8);
  _swift_retain(puVar2);
  FUN_100008184(param_1,param_2);
  FUN_10004090c(param_4,param_5);
  (*pcVar4)(local_a0,local_78,uVar5,0,0,FUN_10025fd1c,puVar3);
  _swift_bridgeObjectRelease(local_a0[0]);
  _swift_release(plVar1);
  _swift_release(puVar3);
  FUN_10003f094(local_a0);
  _swift_release(puVar2);
  return;
}

