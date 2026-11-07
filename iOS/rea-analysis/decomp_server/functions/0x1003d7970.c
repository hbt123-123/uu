// rea decompile_all
// name: FUN_1003d7970
// address: 0x1003d7970
// body: available
// range: 0x1003d7970-0x1003d7a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d7970(undefined8 *param_1,long *param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  code *local_68;
  
  lVar5 = *param_2;
  lVar2 = 0;
  local_68 = param_3;
  __sSqMa(0,*(undefined8 *)(lVar5 + 0xe0));
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  uVar1 = *param_1;
  uVar4 = param_1[1];
  (**(code **)(lVar5 + 0x128))(puVar6,uVar1,uVar4);
  FUN_100006cc8(uVar1);
  (*local_68)(puVar6);
  if (unaff_x21 != 0) {
    _swift_errorRelease(unaff_x21);
  }
  puVar3 = puVar6;
  (**(code **)(*param_2 + 0x120))();
  (**(code **)(lVar7 + 8))(puVar6,lVar2);
  *param_1 = puVar3;
  param_1[1] = uVar4;
  return;
}

