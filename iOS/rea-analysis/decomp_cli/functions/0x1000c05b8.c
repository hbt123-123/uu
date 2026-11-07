// rea decompile_all
// name: FUN_1000c05b8
// address: 0x1000c05b8
// body: available
// range: 0x1000c05b8-0x1000c07a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000c05b8(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = 0;
  bVar6 = false;
  lVar4 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar4 = 0xd0;
  }
  puVar1 = (ulong *)(param_1 + lVar4 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  uVar7 = *puVar1;
  uVar10 = uVar7 & 3;
  if (uVar10 == 0) goto LAB_1000c0638;
LAB_1000c0628:
  uVar5 = uVar7;
  if (uVar10 == 3) {
    do {
      if (!bVar6) {
        param_3[3] = 0;
        param_3[4] = param_6;
        *param_3 = param_5;
        param_3[1] = param_4;
        uVar8 = (uint)*(ulong *)(param_2 + 0x58);
        uVar10 = *(ulong *)(param_2 + 0x50);
        uVar7 = *(ulong *)(param_2 + 0x58);
        while ((uVar8 >> 9 & 1) == 0) {
          if (((uint)uVar7 >> 10 & 1) == 0) {
            uVar9 = uVar7 & 0xfffffffffffff5ff;
          }
          else {
            uVar9 = uVar7 & 0xfffffffffffff1ff;
            *(char *)(param_2 + 0x21) = (char)uVar7;
          }
          uVar2 = *(ulong *)(param_2 + 0x50);
          uVar3 = *(ulong *)(param_2 + 0x58);
          if ((uVar2 == uVar7) && (uVar3 == uVar10)) {
            *(ulong *)(param_2 + 0x50) = uVar9;
            *(ulong *)(param_2 + 0x58) = uVar10;
          }
          if (uVar2 == uVar10 && uVar3 == uVar7) goto LAB_1000c06a8;
          uVar10 = uVar2;
          uVar7 = uVar3;
          uVar8 = (uint)uVar3;
        }
        FUN_1000c0af4(param_2);
LAB_1000c06a8:
        FUN_1000c1884(param_2 + 0x80);
        FUN_1000c0e14(param_2);
      }
      uVar10 = *(ulong *)(param_2 + 0x58) & 0xff;
      if (uVar11 < uVar10) {
        FUN_1000c0c24(param_1,uVar10);
        uVar11 = uVar10;
      }
      *(ulong *)(param_2 + 0x10) = uVar5 & 0xfffffffffffffffc;
      uVar7 = *puVar1;
      if (uVar7 == uVar5) {
        *puVar1 = param_2;
        FUN_1000c0db4();
        return 0;
      }
      bVar6 = true;
      uVar10 = uVar7 & 3;
      if (uVar10 != 0) goto LAB_1000c0628;
LAB_1000c0638:
      FUN_1000c1080(param_2);
      uVar5 = uVar7;
    } while( true );
  }
  FUN_1000c1038(param_1);
  if (bVar6) {
    uVar8 = (uint)*(ulong *)(param_2 + 0x58);
    uVar11 = *(ulong *)(param_2 + 0x50);
    uVar7 = *(ulong *)(param_2 + 0x58);
    while ((uVar8 >> 9 & 1) == 0) {
      uVar5 = uVar7;
      if (((uint)uVar7 >> 10 & 1) != 0) {
        uVar5 = uVar7 & 0xfffffffffffff9ff;
        *(char *)(param_2 + 0x21) = (char)uVar7;
      }
      uVar9 = *(ulong *)(param_2 + 0x50);
      uVar2 = *(ulong *)(param_2 + 0x58);
      if ((uVar9 == uVar7) && (uVar2 == uVar11)) {
        *(ulong *)(param_2 + 0x50) = uVar5 | 0x800;
        *(ulong *)(param_2 + 0x58) = uVar11;
      }
      if (uVar9 == uVar11 && uVar2 == uVar7) goto LAB_1000c0764;
      uVar11 = uVar9;
      uVar7 = uVar2;
      uVar8 = (uint)uVar2;
    }
    FUN_1000c09c4(param_2);
LAB_1000c0764:
    FUN_1000c0de8(param_2);
    FUN_1000c183c(param_2 + 0x80);
  }
  return uVar10;
}

