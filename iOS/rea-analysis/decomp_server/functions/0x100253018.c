// rea decompile_all
// name: FUN_100253018
// address: 0x100253018
// body: available
// range: 0x100253018-0x10025318b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100253018(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x104);
  if (((*(byte *)(param_1 + 0x138) & 1) != 0) && (*(uint *)(param_1 + 0x104) != 0)) {
    pbVar4 = (byte *)(param_1 + 0x14c);
    uVar9 = uVar8;
    do {
      uVar5 = (uint)*(ulong *)(param_1 + 0x10198);
      uVar6 = *(ulong *)(*(long *)(param_1 + 0x101a0) +
                        ((ulong)((uint)*pbVar4 ^ (uint)*(ulong *)(param_1 + 0x10188)) & 0xff) * 8) ^
              *(ulong *)(param_1 + 0x10188) >> 8;
      lVar7 = (*(long *)(param_1 + 0x10190) + (uVar6 & 0xff)) * 0x8088405 + 1;
      *(ulong *)(param_1 + 0x10188) = uVar6;
      *(long *)(param_1 + 0x10190) = lVar7;
      *(ulong *)(param_1 + 0x10198) =
           *(ulong *)(*(long *)(param_1 + 0x101a0) +
                     ((ulong)(uVar5 ^ (uint)lVar7 >> 0x18) & 0xff) * 8) ^
           *(ulong *)(param_1 + 0x10198) >> 8;
      *pbVar4 = *pbVar4 ^ (byte)((uVar5 & 0xfffffffd ^ 3) * (uVar5 | 2) >> 8);
      uVar9 = uVar9 - 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar9 != 0);
  }
  uVar9 = 0;
  while( true ) {
    uVar5 = (uint)uVar8;
    if (*(long *)(param_1 + 0x101c8) != 0) {
      FUN_10024e8ac(uVar8,param_1,*(undefined8 *)(param_1 + 0x68),0,2);
      lVar7 = param_1;
      FUN_10024e8c0(param_1,*(undefined8 *)(param_1 + 0x68));
      uVar6 = *(long *)(param_1 + 0x101c8) - lVar7;
      if ((uVar6 == 0) && (lVar7 = param_1, FUN_100252c10(), (int)lVar7 != 0)) {
        return 0xffffffff;
      }
      uVar1 = (uint)uVar6;
      if (uVar8 <= uVar6) {
        uVar1 = uVar5;
      }
      uVar8 = (ulong)uVar1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x18))
              (uVar2,*(undefined8 *)(param_1 + 0x68),param_1 + 0x14c + uVar9,uVar8);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    (**(code **)(param_1 + 0x38))(uVar3,*(undefined8 *)(param_1 + 0x68));
    if ((int)uVar3 != 0) break;
    uVar9 = (ulong)(uint)((int)uVar9 + (int)uVar2);
    uVar5 = uVar5 - (int)uVar2;
    uVar8 = (ulong)uVar5;
    if (uVar5 == 0) {
      uVar3 = 0;
LAB_100253150:
      *(ulong *)(param_1 + 0x10178) =
           *(long *)(param_1 + 0x10178) + (ulong)*(uint *)(param_1 + 0x104);
      *(long *)(param_1 + 0x10180) = *(long *)(param_1 + 0x10180) + *(long *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      return uVar3;
    }
  }
  uVar3 = 0xffffffff;
  goto LAB_100253150;
}

