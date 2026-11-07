// rea decompile_all
// name: FUN_100075d40
// address: 0x100075d40
// body: available
// range: 0x100075d40-0x100075e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100075d40(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 local_48;
  
  local_48 = param_1;
  _swift_getMetatypeMetadata();
  puVar1 = &local_48;
  __sSS10describingSSx_tclufC(puVar1,param_1);
  uVar2 = 0x5f;
  uVar5 = 0xe100000000000000;
  FUN_100078034(0x5f,0xe100000000000000,puVar1,param_1);
  _swift_bridgeObjectRelease(param_1);
  uVar3 = 0x736e6f6974706f5f;
  uVar6 = 0xe800000000000000;
  uVar7 = 0xf;
  FUN_100053d64(0x736e6f6974706f5f,0xe800000000000000,0xf,uVar2,uVar5);
  uVar4 = uVar2;
  if ((uVar7 & 1) == 0) {
    uVar7 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar7 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar6 >> 0xe == uVar7 * 4) {
      uVar4 = 0xf;
      uVar6 = uVar5;
      __sSSySsSnySS5IndexVGcig(0xf,uVar3,uVar2,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      __sSS14_fromSubstringySSSshFZ(uVar4,uVar3,uVar2,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      uVar5 = uVar3;
    }
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar4;
  return auVar8;
}

