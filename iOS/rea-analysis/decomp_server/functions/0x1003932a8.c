// rea decompile_all
// name: FUN_1003932a8
// address: 0x1003932a8
// body: available
// range: 0x1003932a8-0x100393cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003932a8(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  
  if (param_3 != 0) {
    uVar24 = param_1[2];
    uVar23 = param_1[3];
    iVar22 = *param_1;
    uVar21 = param_1[1];
    do {
      iVar5 = *param_2;
      iVar13 = param_2[1];
      uVar1 = iVar22 + (uVar24 & uVar21 | uVar23 & (uVar21 ^ 0xffffffff)) + -0x28955b88 + iVar5;
      uVar1 = uVar21 + uVar1 * 0x80 + (uVar1 >> 0x19);
      uVar2 = uVar23 + iVar13 + -0x173848aa + (uVar21 & uVar1 | uVar24 & (uVar1 ^ 0xffffffff));
      uVar2 = uVar1 + uVar2 * 0x1000 + (uVar2 >> 0x14);
      iVar6 = param_2[2];
      iVar14 = param_2[3];
      uVar3 = uVar24 + iVar6 + 0x242070db + (uVar1 & uVar2 | uVar21 & (uVar2 ^ 0xffffffff));
      uVar3 = uVar2 + uVar3 * 0x20000 + (uVar3 >> 0xf);
      uVar4 = uVar21 + iVar14 + -0x3e423112 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = uVar3 + uVar4 * 0x400000 + (uVar4 >> 10);
      iVar7 = param_2[4];
      iVar15 = param_2[5];
      uVar1 = uVar1 + iVar7 + -0xa83f051 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = uVar4 + uVar1 * 0x80 + (uVar1 >> 0x19);
      uVar2 = uVar2 + iVar15 + 0x4787c62a + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      uVar2 = uVar1 + uVar2 * 0x1000 + (uVar2 >> 0x14);
      iVar8 = param_2[6];
      iVar16 = param_2[7];
      uVar3 = uVar3 + iVar8 + -0x57cfb9ed + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = uVar2 + uVar3 * 0x20000 + (uVar3 >> 0xf);
      uVar4 = iVar16 + uVar4 + -0x2b96aff + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = uVar3 + uVar4 * 0x400000 + (uVar4 >> 10);
      iVar9 = param_2[8];
      iVar17 = param_2[9];
      uVar1 = iVar9 + uVar1 + 0x698098d8 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = uVar4 + uVar1 * 0x80 + (uVar1 >> 0x19);
      uVar2 = iVar17 + uVar2 + -0x74bb0851 + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      uVar2 = uVar1 + uVar2 * 0x1000 + (uVar2 >> 0x14);
      iVar10 = param_2[10];
      iVar18 = param_2[0xb];
      uVar3 = iVar10 + uVar3 + -0xa44f + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = uVar2 + uVar3 * 0x20000 + (uVar3 >> 0xf);
      uVar4 = iVar18 + uVar4 + -0x76a32842 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = uVar3 + uVar4 * 0x400000 + (uVar4 >> 10);
      iVar11 = param_2[0xc];
      iVar19 = param_2[0xd];
      uVar1 = iVar11 + uVar1 + 0x6b901122 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
      uVar1 = uVar4 + uVar1 * 0x80 + (uVar1 >> 0x19);
      uVar2 = iVar19 + uVar2 + -0x2678e6d + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
      uVar2 = uVar1 + uVar2 * 0x1000 + (uVar2 >> 0x14);
      iVar12 = param_2[0xe];
      iVar20 = param_2[0xf];
      uVar3 = iVar12 + uVar3 + -0x5986bc72 + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
      uVar3 = uVar2 + uVar3 * 0x20000 + (uVar3 >> 0xf);
      uVar4 = iVar20 + uVar4 + 0x49b40821 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
      uVar4 = uVar3 + uVar4 * 0x400000 + (uVar4 >> 10);
      uVar1 = iVar13 + uVar1 + -0x9e1da9e + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = uVar4 + uVar1 * 0x20 + (uVar1 >> 0x1b);
      uVar2 = iVar8 + uVar2 + -0x3fbf4cc0 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = uVar1 + uVar2 * 0x200 + (uVar2 >> 0x17);
      uVar3 = iVar18 + uVar3 + 0x265e5a51 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = uVar2 + uVar3 * 0x4000 + (uVar3 >> 0x12);
      uVar4 = iVar5 + uVar4 + -0x16493856 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = uVar3 + uVar4 * 0x100000 + (uVar4 >> 0xc);
      uVar1 = iVar15 + uVar1 + -0x29d0efa3 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = uVar4 + uVar1 * 0x20 + (uVar1 >> 0x1b);
      uVar2 = iVar10 + uVar2 + 0x2441453 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = uVar1 + uVar2 * 0x200 + (uVar2 >> 0x17);
      uVar3 = iVar20 + uVar3 + -0x275e197f + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = uVar2 + uVar3 * 0x4000 + (uVar3 >> 0x12);
      uVar4 = iVar7 + uVar4 + -0x182c0438 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = uVar3 + uVar4 * 0x100000 + (uVar4 >> 0xc);
      uVar1 = iVar17 + uVar1 + 0x21e1cde6 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = uVar4 + uVar1 * 0x20 + (uVar1 >> 0x1b);
      uVar2 = iVar12 + uVar2 + -0x3cc8f82a + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = uVar1 + uVar2 * 0x200 + (uVar2 >> 0x17);
      uVar3 = iVar14 + uVar3 + -0xb2af279 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = uVar2 + uVar3 * 0x4000 + (uVar3 >> 0x12);
      uVar4 = iVar9 + uVar4 + 0x455a14ed + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
      uVar4 = uVar3 + uVar4 * 0x100000 + (uVar4 >> 0xc);
      uVar1 = iVar19 + uVar1 + -0x561c16fb + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
      uVar1 = uVar4 + uVar1 * 0x20 + (uVar1 >> 0x1b);
      uVar2 = iVar6 + uVar2 + -0x3105c08 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
      uVar2 = uVar1 + uVar2 * 0x200 + (uVar2 >> 0x17);
      uVar3 = iVar16 + uVar3 + 0x676f02d9 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
      uVar3 = uVar2 + uVar3 * 0x4000 + (uVar3 >> 0x12);
      uVar4 = iVar11 + uVar4 + -0x72d5b376 + ((uVar3 ^ uVar2) & uVar1 ^ uVar2);
      uVar4 = uVar3 + uVar4 * 0x100000 + (uVar4 >> 0xc);
      uVar1 = iVar15 + uVar1 + -0x5c6be + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = uVar4 + uVar1 * 0x10 + (uVar1 >> 0x1c);
      uVar2 = iVar9 + uVar2 + -0x788e097f + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = uVar1 + uVar2 * 0x800 + (uVar2 >> 0x15);
      uVar3 = iVar18 + uVar3 + 0x6d9d6122 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = uVar2 + uVar3 * 0x10000 + (uVar3 >> 0x10);
      uVar4 = iVar12 + uVar4 + -0x21ac7f4 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = uVar3 + uVar4 * 0x800000 + (uVar4 >> 9);
      uVar1 = iVar13 + uVar1 + -0x5b4115bc + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = uVar4 + uVar1 * 0x10 + (uVar1 >> 0x1c);
      uVar2 = iVar7 + uVar2 + 0x4bdecfa9 + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = uVar1 + uVar2 * 0x800 + (uVar2 >> 0x15);
      uVar3 = iVar16 + uVar3 + -0x944b4a0 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = uVar2 + uVar3 * 0x10000 + (uVar3 >> 0x10);
      uVar4 = iVar10 + uVar4 + -0x41404390 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = uVar3 + uVar4 * 0x800000 + (uVar4 >> 9);
      uVar1 = iVar19 + uVar1 + 0x289b7ec6 + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = uVar4 + uVar1 * 0x10 + (uVar1 >> 0x1c);
      uVar2 = iVar5 + uVar2 + -0x155ed806 + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = uVar1 + uVar2 * 0x800 + (uVar2 >> 0x15);
      uVar3 = iVar14 + uVar3 + -0x2b10cf7b + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = uVar2 + uVar3 * 0x10000 + (uVar3 >> 0x10);
      uVar4 = iVar8 + uVar4 + 0x4881d05 + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = uVar3 + uVar4 * 0x800000 + (uVar4 >> 9);
      uVar1 = iVar17 + uVar1 + -0x262b2fc7 + (uVar3 ^ uVar2 ^ uVar4);
      uVar1 = uVar4 + uVar1 * 0x10 + (uVar1 >> 0x1c);
      uVar2 = iVar11 + uVar2 + -0x1924661b + (uVar4 ^ uVar3 ^ uVar1);
      uVar2 = uVar1 + uVar2 * 0x800 + (uVar2 >> 0x15);
      uVar3 = iVar20 + uVar3 + 0x1fa27cf8 + (uVar1 ^ uVar4 ^ uVar2);
      uVar3 = uVar2 + uVar3 * 0x10000 + (uVar3 >> 0x10);
      uVar4 = iVar6 + uVar4 + -0x3b53a99b + (uVar2 ^ uVar1 ^ uVar3);
      uVar4 = uVar3 + uVar4 * 0x800000 + (uVar4 >> 9);
      uVar1 = iVar5 + uVar1 + -0xbd6ddbc + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = uVar4 + uVar1 * 0x40 + (uVar1 >> 0x1a);
      uVar2 = iVar16 + uVar2 + 0x432aff97 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = uVar1 + uVar2 * 0x400 + (uVar2 >> 0x16);
      uVar3 = iVar12 + uVar3 + -0x546bdc59 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = uVar2 + uVar3 * 0x8000 + (uVar3 >> 0x11);
      uVar4 = iVar15 + uVar4 + -0x36c5fc7 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = uVar3 + uVar4 * 0x200000 + (uVar4 >> 0xb);
      uVar1 = iVar11 + uVar1 + 0x655b59c3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = uVar4 + uVar1 * 0x40 + (uVar1 >> 0x1a);
      uVar2 = iVar14 + uVar2 + -0x70f3336e + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = uVar1 + uVar2 * 0x400 + (uVar2 >> 0x16);
      uVar3 = iVar10 + uVar3 + -0x100b83 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = uVar2 + uVar3 * 0x8000 + (uVar3 >> 0x11);
      uVar4 = iVar13 + uVar4 + -0x7a7ba22f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = uVar3 + uVar4 * 0x200000 + (uVar4 >> 0xb);
      uVar1 = iVar9 + uVar1 + 0x6fa87e4f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = uVar4 + uVar1 * 0x40 + (uVar1 >> 0x1a);
      uVar2 = iVar20 + uVar2 + -0x1d31920 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = uVar1 + uVar2 * 0x400 + (uVar2 >> 0x16);
      uVar3 = iVar8 + uVar3 + -0x5cfebcec + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = uVar2 + uVar3 * 0x8000 + (uVar3 >> 0x11);
      uVar4 = iVar19 + uVar4 + 0x4e0811a1 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      uVar4 = uVar3 + uVar4 * 0x200000 + (uVar4 >> 0xb);
      uVar1 = iVar7 + uVar1 + -0x8ac817e + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
      uVar1 = uVar4 + uVar1 * 0x40 + (uVar1 >> 0x1a);
      uVar2 = iVar18 + uVar2 + -0x42c50dcb + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
      uVar2 = uVar1 + uVar2 * 0x400 + (uVar2 >> 0x16);
      uVar3 = iVar6 + uVar3 + 0x2ad7d2bb + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
      uVar3 = uVar2 + uVar3 * 0x8000 + (uVar3 >> 0x11);
      uVar4 = iVar17 + uVar4 + -0x14792c6f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
      iVar22 = iVar22 + uVar1;
      uVar24 = uVar24 + uVar3;
      uVar23 = uVar23 + uVar2;
      uVar21 = uVar21 + uVar3 + uVar4 * 0x200000 + (uVar4 >> 0xb);
      *param_1 = iVar22;
      param_1[1] = uVar21;
      param_1[2] = uVar24;
      param_1[3] = uVar23;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

