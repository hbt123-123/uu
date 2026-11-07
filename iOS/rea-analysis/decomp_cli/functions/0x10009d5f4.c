// rea decompile_all
// name: FUN_10009d5f4
// address: 0x10009d5f4
// body: available
// range: 0x10009d5f4-0x10009d7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009d5f4(undefined8 *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = 0x3d;
  uVar10 = 0;
  FUN_100054070(0x3d,0xe100000000000000,param_2,param_3);
  if ((uVar10 & 1) != 0) {
    uVar10 = param_2;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar10 = param_3 >> 0x38 & 0xf;
    }
    if (((param_3 >> 0x3c & 1) == 0) || ((param_2 >> 0x3b & 1) != 0)) {
      uVar2 = uVar10 << 0x10 | 7;
    }
    else {
      uVar2 = uVar10 << 0x10 | 0xb;
    }
  }
  uVar3 = 0xf;
  uVar5 = uVar2;
  uVar9 = param_2;
  uVar8 = param_3;
  __sSSySsSnySS5IndexVGcig();
  uVar7 = param_3;
  FUN_1000714b8(uVar2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  uVar6 = 1;
  uVar4 = uVar2;
  __sSs5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(uVar2,1,param_2,uVar2,param_2,uVar7,uVar8);
  uVar10 = param_2;
  if ((uVar6 & 1) == 0) {
    uVar10 = uVar4;
  }
  if (param_2 >> 0xe < uVar10 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10009d7b0);
    (*pcVar1)();
  }
  uVar4 = param_2;
  __sSsySsSnySS5IndexVGcig(uVar10,param_2,uVar2,param_2,uVar7,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  FUN_100098180();
  if ((uVar10 ^ param_2) >> 0xe == 0) {
    _swift_bridgeObjectRelease(uVar4);
    uVar10 = 0;
    param_2 = 0;
    uVar9 = uVar9 & 0xff;
  }
  else {
    __sSS14_fromSubstringySSSshFZ(uVar10,param_2,uVar2,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    uVar9 = uVar9 & 0xff | 0x8000000000000000;
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  param_1[4] = param_2;
  return;
}

